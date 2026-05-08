#include "BlackHole.h"

BlackHole::BlackHole(const Coordinates Position, const float MassesOfSun): Galaxy_Object(Position) {
    this->MassesOfSun = MassesOfSun;
    this->EventHorizon = 2.95f * MassesOfSun;
}

void ChangePosition(BlackHole* BlackHole, const Galaxy_Object::Coordinates Position)
{
    BlackHole->Position = Position;
}
