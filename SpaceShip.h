#ifndef SPACESHIP_H
#define SPACESHIP_H

#include "Civilization.h"
#include "Vehicle.h"

class Civilization;

class SpaceShip : public Vehicle
{
protected:
    std::string PropulsionMethod;
    SpaceShip(float TopSpeed, int OperatingCosts, Coordinates Position, const std::string& PropulsionMethod);

    friend void ChangePosition(SpaceShip* SpaceShip, Coordinates Position);
    void ShowInformation() const;

};

void ChangePosition(SpaceShip* SpaceShip, Galaxy_Object::Coordinates Position);

#endif //SPACESHIP_H