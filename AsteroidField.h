#ifndef ASTEROIDFIELD_H
#define ASTEROIDFIELD_H
#include "Galaxy_Object.h"

class AsteroidField : public GalaxyObject
{
private:
    float size;
    float density;

public:
    AsteroidField(Coordinates position, float size, float density);

    friend void ChangePosition(AsteroidField* asteroidField, Coordinates position);

};

void ChangePosition(AsteroidField* asteroidField, GalaxyObject::Coordinates position);

#endif //ASTEROIDFIELD_H
