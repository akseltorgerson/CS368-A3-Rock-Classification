#ifndef GOLD_HEADER
#define GOLD_HEADER
class Gold : public Rock {
    public:
        Gold(float _mass) : Rock(_mass) {}
        bool Inspect() {
            classification = "Gold";
            if (mass >= 1) {
                return true;
            } else {
                return false;
            }
        }
};
#endif