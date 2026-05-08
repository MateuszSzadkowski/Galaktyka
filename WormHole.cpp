#include "WormHole.h"

WormHole::WormHole(const Coordinates Entry, const Coordinates Exit): FastTravelObject(Entry, Exit){}

void WormHole::travel(Galaxy_Object *Galaxy_Object)
{
    isOnEntry(Galaxy_Object) ? Galaxy_Object->Position = Exit : Galaxy_Object->Position;
}

bool WormHole::isOnEntry(Galaxy_Object* Galaxy_Object)
{
    return Galaxy_Object->Position == Entry;
}

bool WormHole::isOnExit(Galaxy_Object* Galaxy_Object)
{
    return Galaxy_Object->Position == Exit;
}

Galaxy_Object::Coordinates WormHole::getEntry() const
{
    return Entry;
}

Galaxy_Object::Coordinates WormHole::getExit() const
{
    return Exit;
}