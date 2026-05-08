#include "Star.h"

Star::Star(const std::string &Name, const Coordinates Position)
{
    this->Name = Name;
    this->Position = Position;
}

Galaxy_Object::Coordinates Star::getPosition() const
{
    return Position;
}

void ChangePosition(Star *Star, Galaxy_Object::Coordinates Position) {
    Star->Position = Position;
}
