#ifndef CELESITALBODY_H
#define CELESITALBODY_H
#include "Galaxy_Object.h"
#include <string>


class CelestialBody : public GalaxyObject
{
    public:
    Coordinates barycenter{};
    float distanceFromBarycenter;
    float revolutionSpeed;

    CelestialBody(Coordinates barycenter, float distanceFromBarycenter, float revolutionSpeed);
    ~CelestialBody() override = default;

    virtual float getRevolutionSpeed() = 0;
    virtual int CalculateRevolutionTime() = 0;
    virtual void UpdatePosition(int Tick) = 0;
    virtual void ShowInformation() = 0;
    virtual std::string getName() = 0;
    virtual Coordinates getPosition() = 0;
};



#endif //CELESITALBODY_H
