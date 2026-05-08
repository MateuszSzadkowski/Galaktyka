#ifndef PEOPLECARRIER_H
#define PEOPLECARRIER_H

#include "TransportSpaceShip.h"

class PeopleCarrier : public TransportSpaceShip {
public:
    Civilization* TransportedCivilization{};

    explicit PeopleCarrier(Coordinates Position);
    void LoadShip(int Load, Civilization* Civilization);
    void ShowInformation() const;
};



#endif //PEOPLECARRIER_H
