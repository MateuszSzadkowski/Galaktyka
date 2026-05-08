#include "SpaceShip.h"

#include <iostream>
#include <ostream>

SpaceShip::SpaceShip(const float TopSpeed, const int OperatingCosts, const Galaxy_Object::Coordinates Position,
                     const std::string& PropulsionMethod) : Vehicle(Position, TopSpeed, OperatingCosts)
{
    this->PropulsionMethod = PropulsionMethod;
}

void SpaceShip::ShowInformation() const {
    Vehicle::ShowInformation();
    std::cout << ", Propulsion Method: " << PropulsionMethod;
}


void ChangePosition(SpaceShip *SpaceShip, const Galaxy_Object::Coordinates Position) {
    SpaceShip->Position = Position;
}