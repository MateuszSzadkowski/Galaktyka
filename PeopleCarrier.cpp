#include "PeopleCarrier.h"

#include <iostream>

PeopleCarrier::PeopleCarrier(const Coordinates position) : TransportSpaceShip(100, 80, position, "Ion Engine", 1000)
{
    std::cout << "People Carrier has been created." << std::endl;
}

void PeopleCarrier::LoadShip(const int load, Civilization* civilization)
{
    TransportSpaceShip::LoadShip(load);
    transportedCivilization = civilization;
}

void PeopleCarrier::ShowInformation() const
{
    TransportSpaceShip::ShowInformation();
    if (transportedCivilization == nullptr)
        std::cout << std::endl;
    else
        std::cout << ", Transported Civilization: " << transportedCivilization->getName() << std::endl;
}
