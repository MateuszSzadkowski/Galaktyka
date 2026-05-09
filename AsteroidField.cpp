#include "AsteroidField.h"

AsteroidField::AsteroidField(const Coordinates position, const float size, const float density) : GalaxyObject(position)
{
    this->size = size;
    this->density = density;
}

void ChangePosition(AsteroidField* asteroidField, const GalaxyObject::Coordinates position)
{
    asteroidField->position = position;
}
