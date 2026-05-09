#ifndef BLACKHOLE_H
#define BLACKHOLE_H
#include "Galaxy_Object.h"

class BlackHole : public GalaxyObject
{
private:
    float massesOfSun;
    float eventHorizon;

public:
    BlackHole(Coordinates position, float massesOfSun);

    friend void ChangePosition(BlackHole* blackHole, Coordinates position);

};

void ChangePosition(BlackHole* blackHole, GalaxyObject::Coordinates position);

#endif //BLACKHOLE_H
