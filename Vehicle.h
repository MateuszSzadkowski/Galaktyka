#ifndef VEHICLE_H
#define VEHICLE_H

#include "Galaxy_Object.h"

class Vehicle : public Galaxy_Object
{
protected:
    float TopSpeed;
    int OperatingCosts;

    Vehicle(Coordinates Position, float TopSpeed, int OperatingCosts);
    void ShowInformation() const;

};



#endif //VEHICLE_H
