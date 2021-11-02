#include <iostream>
#include <cstdlib>
#include <time.h>

#include "Rock.h"
#include "RockPile.h"
#include "RockMaker.h"

using namespace std;

enum MENU_ITEMS { ROCK = 1, INSPECT = 2, LIST_INSPECT = 3, LIST_KEEP = 4, EXIT = 5 };

int main() {
    srand(time(NULL));
    RockPile inspection = RockPile("Inspection Pile");
    RockPile keepers = RockPile("Keepers");
    int selection;
    do {
        Rock* next = nullptr;
        cout << "Please choose what to do next: " << endl
             << "[1] Collect a rock" << endl
             << "[2] Inspect a rock" << endl
             << "[3] View inspection pile" << endl
             << "[4] View keeper pile" << endl
             << "[5] End program" << endl;
        cin >> selection;
        switch (selection) {
            case ROCK:
								next = PanForRock();
								inspection.Add(next);
                break;
            case INSPECT:
             		next = inspection.Remove();
              	if (next->Inspect()) {
                	  cout << "Nice Rock Bro!" << endl;
                		next->Print();
                		keepers.Add(next);
              	} else {
                 		delete next;
              	}
              	break;
            case LIST_INSPECT:
                inspection.Print();
                break;
            case LIST_KEEP:
                keepers.Print();
                break;
        }
    } while (selection != EXIT);

    return 0;
}

