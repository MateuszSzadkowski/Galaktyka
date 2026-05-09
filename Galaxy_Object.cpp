#include "Galaxy_Object.h"

int GalaxyObject::tick = 0;

GalaxyObject::GalaxyObject(const Coordinates position)
{
        this->position = position;
}

static void IterateTick()
{
        GalaxyObject::tick++;
}