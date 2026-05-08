#include "Galaxy_Object.h"

int Galaxy_Object::Tick = 0;

Galaxy_Object::Galaxy_Object(const Coordinates Position) {
        this->Position = Position;
}

Galaxy_Object::Galaxy_Object() = default;

static void IterateTick() {
        Galaxy_Object::Tick++;
}


