#include "BlackHole.h"

BlackHole::BlackHole(const Coordinates position, const float massesOfSun): GalaxyObject(position)
{
    this->massesOfSun = massesOfSun;
    this->eventHorizon = 2.95f * massesOfSun;
}

void ChangePosition(BlackHole* blackHole, const GalaxyObject::Coordinates position)
{
    blackHole->position = position;
}
