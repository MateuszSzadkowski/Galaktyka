#ifndef BLACKHOLE_H
#define BLACKHOLE_H
#include "Galaxy_Object.h"

class BlackHole : Galaxy_Object {
private:
    float MassesOfSun;
    float EventHorizon;

public:
    BlackHole(Coordinates Position, float MassesOfSun);

    friend void ChangePosition(BlackHole* BlackHole, Coordinates Position);

};

void ChangePosition(BlackHole* BlackHole, Galaxy_Object::Coordinates Position);

#endif //BLACKHOLE_H
