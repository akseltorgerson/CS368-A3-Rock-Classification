#include "Rock.h"
#ifndef SANDSTONE_HEADER
#define SANDSTONE_HEADER
class Sandstone : public Rock {
    public:
        Sandstone(float _mass) : Rock(_mass) {}
        bool Inspect() {
            classification = "Sandstone";
            return false;
        }
};
#endif
