#ifndef PEOPLECARRIER_H
#define PEOPLECARRIER_H

#include "TransportSpaceShip.h"

class PeopleCarrier : public TransportSpaceShip
{
public:
    Civilization* transportedCivilization{};

    explicit PeopleCarrier(Coordinates position);
    void LoadShip(int load, Civilization* civilization);
    void ShowInformation() const;
};



#endif //PEOPLECARRIER_H
