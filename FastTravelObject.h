#ifndef FASTTRAVELOBJECT_H
#define FASTTRAVELOBJECT_H
#include "Galaxy_Object.h"

class FastTravelObject : protected Galaxy_Object{
protected:
    Coordinates Entry{};
    Coordinates Exit{};
public:
    FastTravelObject(Coordinates Entry, Coordinates Exit);

    virtual void travel(Galaxy_Object* Galaxy_Object) = 0;
    virtual bool isOnEntry(Galaxy_Object* Galaxy_Object) = 0;
    virtual bool isOnExit(Galaxy_Object* Galaxy_Object) = 0;
    [[nodiscard]] virtual Coordinates getEntry() const = 0;
    [[nodiscard]] virtual Coordinates getExit() const = 0;

};

#endif //FASTTRAVELOBJECT_H
