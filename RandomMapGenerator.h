#ifndef RANDOMCLUSTERGENERATOR_H
#define RANDOMCLUSTERGENERATOR_H
#include "Galaxy_Object.h"
#include "MapGenerator.h"


class RandomMapGenerator : public MapGenerator
{
private:
    double density = 0;
    borders perimeter = {};
    GalaxyObject* generationObject = nullptr;
public:
    void setDensity(double density) override;
    double getDensity() override;
    void setGenerationBorders(borders borders) override;
    borders getGenerationBorders() override;
    void setGenerationObject(GalaxyObject* galaxyObject) override;
    [[nodiscard]] int getAmountOfObjects() const;
    static double getRandomDouble(double min, double max);
    void generate() override;
};



#endif //RANDOMCLUSTERGENERATOR_H
