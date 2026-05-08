#ifndef MAPGENERATOR_H
#define MAPGENERATOR_H
#include "Galaxy_Object.h"

class MapGenerator : Galaxy_Object
{
protected:
    struct Borders
    {
        Coordinates topLeft;
        Coordinates bottomRight;
    };
public:
    virtual void setDensity(double density);
    virtual double getDensity();
    virtual void setGenerationBorders(Borders Borders);
    virtual Borders getGenerationBorders();
    virtual void setGenerationObject(Galaxy_Object Galaxy_Object);
};



#endif //MAPGENERATOR_H
