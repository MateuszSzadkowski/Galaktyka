#include "TransportSpaceShip.h"
#include <iostream>

TransportSpaceShip::TransportSpaceShip(const float topSpeed, const int operatingCosts, const Coordinates position,
                                       const std::string &propulsionMethod, const int maxCapacity) : SpaceShip(
    topSpeed, operatingCosts, position, propulsionMethod)
{
    this->capacity = maxCapacity;
    this->maxCapacity = maxCapacity;
}

void TransportSpaceShip::ShowInformation() const
{
    SpaceShip::ShowInformation();
    std::cout << ", Max Capacity: " << maxCapacity << ", Current Capacity: " << capacity;
}

void TransportSpaceShip::LoadShip(const int load)
{
    if (load > this->capacity)
    {
        std::cout << "The ship doesn't have enough capacity for this load" << std::endl;
    }
    else
    this->capacity -= load;
}
