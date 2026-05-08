#ifndef WORMHOLE_H
#define WORMHOLE_H

#include "Galaxy_Object.h"

class WormHole : Galaxy_Object {
private:
    Coordinates Entry{};
    Coordinates Exit{};

public:
    WormHole(Coordinates Entry, Coordinates Exit);

};

#endif //WORMHOLE_H
