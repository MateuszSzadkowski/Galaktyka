#include "Vehicle.h"

#include <iostream>
#include <ostream>

Vehicle::Vehicle(const Coordinates position, const float topSpeed, const int operatingCosts) : GalaxyObject(position)
{
    this->topSpeed = topSpeed;
    this->operatingCosts = operatingCosts;
}

void Vehicle::ShowInformation() const
{
    std::cout << "Top Speed: " << topSpeed << ", Operating Costs: " << operatingCosts;
}

