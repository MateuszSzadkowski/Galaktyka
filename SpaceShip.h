#ifndef SPACESHIP_H
#define SPACESHIP_H

#include "Civilization.h"
#include "Vehicle.h"

class Civilization;

class SpaceShip : public Vehicle
{
protected:
    std::string propulsionMethod;
    SpaceShip(float topSpeed, int operatingCosts, Coordinates position, const std::string& propulsionMethod);

    friend void ChangePosition(SpaceShip* spaceShip, Coordinates position);
    void ShowInformation() const;

};

void ChangePosition(SpaceShip* spaceShip, GalaxyObject::Coordinates position);

#endif //SPACESHIP_H