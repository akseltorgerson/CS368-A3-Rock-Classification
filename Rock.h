#include <cstdlib>
#include <iostream>
#include <cstring>
#include "Rock.h"
#include "Ruby.h"
#include "Gold.h"
#include "Diamond.h"
#include "Sandstone.h"

#ifndef ROCK_HEADER
#define ROCK_HEADER
class Rock {
    protected:
        string classification;
        float mass;

    public:
        Rock(float _mass)  {
            this.classification = "Rock";
            this.mass = _mass;
        }
        void Print() {
            cout << this.classification << ": " << mass << " grams" << endl;
        }
        virtual bool Inspect();
};
#endif