#include "RockPile.h"

using namespace std;

RockPile::RockPile(string _name) {
		name = _name;
		count = 0;
		size = DEFAULT_SIZE;
		pile = new Rock* [size];
}

RockPile::~RockPile() {
	for (int i = 0; i < count; i++) {
			delete pile[i];
	}
	delete pile;
}

void RockPile::Add(Rock* _rock) {
		if (count == size) {
				Grow();
		}
		pile[count] = _rock;
		count += 1;
}

Rock* RockPile::Remove() {
		Rock* retRock = pile[count - 1];
		pile[count - 1] = nullptr;
		count -= 1;
		if (count < size/4) {
				Shrink();
		}
		return retRock;
}

int RockPile::GetSize() {
		return size;
}

int RockPile::GetCount() {
		return count;
}

void RockPile::Print() {
		cout << name << endl;
		cout << "Size: " << size << " | Count: " << count << endl;
		for (int i = 0; i < count; i++) {
				pile[i]->Print();
		}
}

void RockPile::Grow() {
		size = size * 2;
		Rock** tmpPile = new Rock* [size];
		for (int i = 0; i < count; i++) {
				tmpPile[i] = pile[i];
		}
		delete pile;
		pile = tmpPile;
}

void RockPile::Shrink() {
		size = size / 2;
		Rock** tmpPile = new Rock* [size];
		for (int i = 0; i < count; i++) {
				tmpPile[i] = pile[i];
		}
		delete pile;
		pile = tmpPile;
}
