#ifndef RANDOMCLUSTERGENERATOR_H
#define RANDOMCLUSTERGENERATOR_H
#include "Galaxy_Object.h"
#include "MapGenerator.h"


class RandomMapGenerator : MapGenerator
{
private:
    double density = 0;
    borders perimeter = {};
    Galaxy_Object GenerationObject;
public:
    void setDensity(double density) override;
    double getDensity() override;
    void setGenerationBorders(borders borders) override;
    borders getGenerationBorders() override;
    void setGenerationObject(Galaxy_Object Galaxy_Object) override;
    void generate() override;
};



#endif //RANDOMCLUSTERGENERATOR_H
