#include "Vehicle.h"

#include <iostream>
#include <ostream>

Vehicle::Vehicle(const Coordinates Position, const float TopSpeed, const int OperatingCosts) : Galaxy_Object(Position)
{
    this->TopSpeed = TopSpeed;
    this->OperatingCosts = OperatingCosts;
}

void Vehicle::ShowInformation() const {
    std::cout << "Top Speed: " << TopSpeed << ", Operating Costs: " << OperatingCosts;
}

