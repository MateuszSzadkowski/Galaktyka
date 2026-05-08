#include "TransportSpaceShip.h"
#include <iostream>

TransportSpaceShip::TransportSpaceShip(const float TopSpeed, const int OperatingCosts, const Coordinates Position,
                                       const std::string &PropulsionMethod, const int MaxCapacity) : SpaceShip(
    TopSpeed, OperatingCosts, Position, PropulsionMethod)
{
    this->Capacity = MaxCapacity;
    this->MaxCapacity = MaxCapacity;
}

void TransportSpaceShip::ShowInformation() const {
    SpaceShip::ShowInformation();
    std::cout << ", Max Capacity: " << MaxCapacity << ", Current Capacity: " << Capacity;
}

void TransportSpaceShip::LoadShip(const int Load) {
    if (Load > this->Capacity)
    {
        std::cout << "The ship doesn't have enough capacity for this load" << std::endl;
    }
    else
    this->Capacity -= Load;
}
