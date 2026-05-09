#ifndef WORMHOLE_H
#define WORMHOLE_H

#include "FastTravelObject.h"
#include "Galaxy_Object.h"

class WormHole final : public FastTravelObject
{
public:
    WormHole(Coordinates entry, Coordinates exit);

    void travel(GalaxyObject *galaxyObject) override;
    bool isOnEntry(GalaxyObject* galaxyObject) override;
    bool isOnExit(GalaxyObject* galaxyObject) override;
    [[nodiscard]] Coordinates getEntry() const override;
    [[nodiscard]] Coordinates getExit() const override;

};

#endif //WORMHOLE_H
