#ifndef WORMHOLE_H
#define WORMHOLE_H

#include "FastTravelObject.h"
#include "Galaxy_Object.h"

class WormHole final : FastTravelObject {
public:
    WormHole(Coordinates Entry, Coordinates Exit);

    void travel(Galaxy_Object *Galaxy_Object) override;
    bool isOnEntry(Galaxy_Object* Galaxy_Object) override;
    bool isOnExit(Galaxy_Object* Galaxy_Object) override;
    [[nodiscard]] Coordinates getEntry() const override;
    [[nodiscard]] Coordinates getExit() const override;

};

#endif //WORMHOLE_H
