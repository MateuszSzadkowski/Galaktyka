#ifndef CELESITALBODY_H
#define CELESITALBODY_H
#include "Galaxy_Object.h"


class CelestialBody : public Galaxy_Object{
    public:
    Coordinates Barycenter{};
    float DistanceFromBarycenter;

    CelestialBody(Coordinates Barycenter, float DistanceFromBarycenter);

    virtual void UpdatePosition(int Tick) = 0;
};



#endif //CELESITALBODY_H
