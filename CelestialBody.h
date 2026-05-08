#ifndef CELESITALBODY_H
#define CELESITALBODY_H
#include "Galaxy_Object.h"
#include <string>


class CelestialBody : public Galaxy_Object{
    public:
    Coordinates Barycenter{};
    float DistanceFromBarycenter;
    float RevolutionSpeed;

    CelestialBody(Coordinates Barycenter, float DistanceFromBarycenter, float RevolutionSpeed);
    ~CelestialBody() override = default;

    virtual float getRevolutionSpeed() = 0;
    virtual int CalculateRevolutionTime() = 0;
    virtual void UpdatePosition(int Tick) = 0;
    virtual void ShowInformation() = 0;
    virtual std::string getName() = 0;
    virtual Coordinates getPosition() = 0;
};



#endif //CELESITALBODY_H
