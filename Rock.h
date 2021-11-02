// Aksel Torgerson
// atorgerson

#include <string>
#include <iostream>

using namespace std;

#ifndef ROCK_HEADER
#define ROCK_HEADER
class Rock {
    protected:
        string classification;
        float mass;

    public:
        Rock(float _mass)  {
            classification = "Rock";
            mass = _mass;
        }
        void Print() {
            cout << classification << ": " << mass << " grams" << endl;
        }
        virtual bool Inspect() = 0;
};
#endif
