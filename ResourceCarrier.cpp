#include "ResourceCarrier.h"

#include <iostream>

ResourceCarrier::ResourceCarrier(const Coordinates Position) : TransportSpaceShip(100, 100, Position, "Solar Propulsion", 10000){
    std::cout<<"ResourceCarrier has been created."<<std::endl;
}
