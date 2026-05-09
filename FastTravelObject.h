#ifndef FASTTRAVELOBJECT_H
#define FASTTRAVELOBJECT_H
#include "Galaxy_Object.h"

class FastTravelObject : protected GalaxyObject
{
protected:
    Coordinates entry{};
    Coordinates exit{};
public:
    FastTravelObject(Coordinates entry, Coordinates exit);

    virtual void travel(GalaxyObject* galaxyObject) = 0;
    virtual bool isOnEntry(GalaxyObject* galaxyObject) = 0;
    virtual bool isOnExit(GalaxyObject* galaxyObject) = 0;
    [[nodiscard]] virtual Coordinates getEntry() const = 0;
    [[nodiscard]] virtual Coordinates getExit() const = 0;

};

#endif //FASTTRAVELOBJECT_H
