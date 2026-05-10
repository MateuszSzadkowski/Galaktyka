#include "GalaxyObject.h"

int GalaxyObject::tick = 0;
unsigned long long int numberOfObjects= 0;

GalaxyObject::GalaxyObject(const Coordinates position)
{
        this->position = position;
        id = numberOfObjects++;
}

void GalaxyObject::iterateTick()
{
        tick++;
}