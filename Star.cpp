#include "Star.h"

Star::Star(const std::string &name, const Coordinates position)
{
    this->name = name;
    this->position = position;
}

GalaxyObject::Coordinates Star::getPosition() const
{
    return position;
}

void ChangePosition(Star *star, GalaxyObject::Coordinates position)
{
    star->position = position;
}
