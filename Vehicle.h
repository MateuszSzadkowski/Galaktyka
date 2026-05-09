#ifndef VEHICLE_H
#define VEHICLE_H

#include "Galaxy_Object.h"

class Vehicle : public GalaxyObject
{
protected:
    float topSpeed;
    int operatingCosts;

    Vehicle(Coordinates position, float topSpeed, int operatingCosts);
    void ShowInformation() const;

};



#endif //VEHICLE_H
