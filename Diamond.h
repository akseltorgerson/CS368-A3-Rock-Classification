#include "Rock.h"
#ifndef DIAMOND_HEADER
#define DIAMOND_HEADER
class Diamond : public Rock {
    public:
        Diamond(float _mass) : Rock(_mass) {}
        bool Inspect() {
            classification = "Diamond";
            if (mass >= 3) {
                return true;
            } else {
                return false;
            }
        }
};
#endif
