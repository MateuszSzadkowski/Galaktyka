#include "PeopleCarrier.h"

#include <iostream>

PeopleCarrier::PeopleCarrier(const Coordinates Position) : TransportSpaceShip(100, 80, Position, "Ion Engine", 1000) {
    std::cout << "People Carrier has been created." << std::endl;
}

void PeopleCarrier::LoadShip(const int Load, Civilization* Civilization) {
    TransportSpaceShip::LoadShip(Load);
    TransportedCivilization = Civilization;
}

void PeopleCarrier::ShowInformation() const {
    TransportSpaceShip::ShowInformation();
    if (TransportedCivilization == nullptr)
        std::cout << std::endl;
    else
        std::cout << ", Transported Civilization: " << TransportedCivilization->getName() << std::endl;
}
