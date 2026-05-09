#ifndef TRANSPORTSPACESHIP_H
#define TRANSPORTSPACESHIP_H
#include "SpaceShip.h"

class TransportSpaceShip : public SpaceShip
{
protected:
    int capacity;
    int maxCapacity;
    TransportSpaceShip(float topSpeed, int operatingCosts, Coordinates position, const std::string& propulsionMethod, int maxCapacity);

public:
    void ShowInformation() const;
    void LoadShip(int load);
};

#endif //TRANSPORTSPACESHIP_H
