#include "SpaceShip.h"

#include <iostream>
#include <ostream>

SpaceShip::SpaceShip(const float topSpeed, const int operatingCosts, const GalaxyObject::Coordinates position,
                     const std::string& propulsionMethod) : Vehicle(position, topSpeed, operatingCosts)
{
    this->propulsionMethod = propulsionMethod;
}

void SpaceShip::ShowInformation() const
{
    Vehicle::ShowInformation();
    std::cout << ", Propulsion Method: " << propulsionMethod;
}


void ChangePosition(SpaceShip *spaceShip, const GalaxyObject::Coordinates position)
{
    spaceShip->position = position;
}