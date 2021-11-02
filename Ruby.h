// Aksel Torgerson
// atorgerson

#include "Rock.h"
#ifndef RUBY_HEADER
#define RUBY_HEADER
class Ruby : public Rock {
    public:
        Ruby(float _mass) : Rock(_mass) {}
        bool Inspect() {
            classification = "Ruby";
            if (mass >= 5) {
                return true;
            } else {
                return false;
            }
        }
};
#endif
