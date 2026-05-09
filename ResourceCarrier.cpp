#include "ResourceCarrier.h"

#include <iostream>

ResourceCarrier::ResourceCarrier(const Coordinates position) : TransportSpaceShip(100, 100, position, "Solar Propulsion", 10000)
{
    std::cout<<"ResourceCarrier has been created."<<std::endl;
}
