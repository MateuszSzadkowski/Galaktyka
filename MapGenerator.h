#ifndef MAPGENERATOR_H
#define MAPGENERATOR_H
#include "Galaxy_Object.h"

class MapGenerator : protected GalaxyObject
{
protected:
    struct borders
    {
        Coordinates topLeft;
        Coordinates bottomRight;
    };
    borders perimeter = {};
public:
    virtual void setDensity(double density) = 0;
    virtual double getDensity() = 0;
    virtual void setGenerationBorders(borders borders) = 0;
    virtual borders getGenerationBorders() = 0;
    virtual void setGenerationObject(GalaxyObject* galaxyObject) = 0;
    virtual void generate() = 0;
};



#endif //MAPGENERATOR_H
