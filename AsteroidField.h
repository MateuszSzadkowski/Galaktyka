#ifndef ASTEROIDFIELD_H
#define ASTEROIDFIELD_H
#include "Galaxy_Object.h"

class AsteroidField : Galaxy_Object {
private:
    float Size;
    float Density;

public:
    AsteroidField(Coordinates Position, float Size, float Density);

    friend void ChangePosition(AsteroidField* AsteroidField, Coordinates Position);

};

void ChangePosition(AsteroidField* AsteroidField, Galaxy_Object::Coordinates Position);

#endif //ASTEROIDFIELD_H
