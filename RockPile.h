#include <cstring>
#include "Rock.h"
#ifndef ROCKPILE_HEADER
#define ROCKPILE_HEADER

using namespace std;

#define DEFAULT_SIZE 10

class RockPile {
    public:
        string name;
        int count;
        int size;
        Rock** pile;
        RockPile(string _name);
        ~RockPile();
        void Add(Rock* _rock);
        Rock* Remove();
        int GetSize();
        int GetCount();
        void Print();
    private:
        void Grow();
        void Shrink();

};
#endif
