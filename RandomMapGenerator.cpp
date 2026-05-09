#include "RandomMapGenerator.h"
#include <random>

void RandomMapGenerator::setDensity(const double density)
{
    this->density = density;
}

double RandomMapGenerator::getDensity()
{
    return this->density;
}

void RandomMapGenerator::setGenerationBorders(borders perimeter)
{
    this->perimeter = perimeter;
}

MapGenerator::borders RandomMapGenerator::getGenerationBorders()
{
    return this->perimeter;
}

void RandomMapGenerator::setGenerationObject(GalaxyObject* galaxyObject)
{
    this->generationObject = galaxyObject;
}

int RandomMapGenerator::getAmountOfObjects() const
{
    const double area = ( perimeter.topLeft.x + perimeter.bottomRight.x ) * ( perimeter.topLeft.x + perimeter.bottomRight.x ) ;
    return static_cast<int>(density * area);

}

double RandomMapGenerator::getRandomDouble(const double min, const double max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(min, max);

    return dis(gen);
}

void RandomMapGenerator::generate()
{
    int amountOfObjects = getAmountOfObjects();
    const double minX = perimeter.topLeft.x;
    const double maxX = perimeter.bottomRight.x;
    const double minY = perimeter.topLeft.y;
    const double maxY = perimeter.bottomRight.y;



}
