#include <cstring>
#include "Rock.h"
#ifndef ROCKPILE_HEADER
#define ROCKPILE_HEADER
#define DEFAULT_SIZE 10
class RockPile {
    public:
        string name;
        int count;
        int size;
        Rock** pile;

        RockPile(string _name) {
            name = _name;
            count = 0;
            size = DEFAULT_SIZE;
            pile = new Rock* [size];
        }

        ~RockPile() {
            for (int i = 0; i < count; i++) {
                delete pile[i];
            }
            delete pile;
        }

        void Add(Rock* _rock) {
            if (count == size) {
                Grow();
            }
            pile[count] = _rock;
            count += 1;
        }

        Rock* Remove() {
            Rock* retRock = pile[count];
            pile[count] = nullptr;
            count -= 1;
            if (count < size/4) {
                Shrink();
            }
        }

        int GetSize() {
            return size;
        }

        int GetCount() {
            return count;
        }

        void Print() {
            count << name << endl;
            count << "Size: " << size << " | Count: " << count << endl;
            for (int i = 0; i < count; i++) {
                pile[i]->Print();
            }
        }

    private:
        void Grow() {
            size = size * 2;
            Rock** tmpPile = new Rock* [size];
            for (int i = 0; i < count; i++) {
                tmpPile[i] = pile[i];
            }
            delete pile;
            pile = tmpPile;
        }

        void Shrink() {
            size = size / 2;
            Rock++ tmpPile = new Rock* [size];
            for (int i = 0; i < count; i++) {
                tmpPile[i] = pile[i];
            }
            delete pile;
            pile = tmpPile;
        }

}
#endif