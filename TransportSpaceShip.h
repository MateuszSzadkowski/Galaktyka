#ifndef TRANSPORTSPACESHIP_H
#define TRANSPORTSPACESHIP_H
#include "SpaceShip.h"

class TransportSpaceShip : public SpaceShip
{
protected:
    int Capacity;
    int MaxCapacity;
    TransportSpaceShip(float TopSpeed, int OperatingCosts, Coordinates Position, const std::string& PropulsionMethod, int MaxCapacity);

public:
    void ShowInformation() const;
    void LoadShip(int Load);
};

#endif //TRANSPORTSPACESHIP_H
