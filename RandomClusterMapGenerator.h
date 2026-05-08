#ifndef RANDOMCLUSTERGENERATOR_H
#define RANDOMCLUSTERGENERATOR_H
#include "Galaxy_Object.h"
#include "MapGenerator.h"


class RandomClusterMapGenerator : MapGenerator
{
private:
     double Density;

     void setDensity(double density) override;
     double getDensity() override;
     void setGenerationBorders() override;
     double getGenerationBorders() override;
     void setGenerationObject() override;
};



#endif //RANDOMCLUSTERGENERATOR_H
