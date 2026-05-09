#include "WormHole.h"

WormHole::WormHole(const Coordinates entry, const Coordinates exit): FastTravelObject(entry, exit){}

void WormHole::travel(GalaxyObject *galaxyObject)
{
    isOnEntry(galaxyObject) ? galaxyObject->position = exit : galaxyObject->position;
}

bool WormHole::isOnEntry(GalaxyObject* galaxyObject)
{
    return galaxyObject->position == entry;
}

bool WormHole::isOnExit(GalaxyObject* galaxyObject)
{
    return galaxyObject->position == exit;
}

GalaxyObject::Coordinates WormHole::getEntry() const
{
    return entry;
}

GalaxyObject::Coordinates WormHole::getExit() const
{
    return exit;
}