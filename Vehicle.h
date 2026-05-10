#ifndef VEHICLE_H
#define VEHICLE_H

#include "GalaxyObject.h"

class Vehicle : protected GalaxyObject
{
protected:
    float topSpeed;
    int operatingCosts;

    Vehicle(Coordinates position, float topSpeed, int operatingCosts);

    virtual void ShowInformation() const;

};



#endif //VEHICLE_H
