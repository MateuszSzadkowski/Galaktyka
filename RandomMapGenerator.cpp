#include "RandomMapGenerator.h"
#include <iostream>

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

void RandomMapGenerator::setGenerationObject(const Galaxy_Object Galaxy_Object)
{
    this->GenerationObject = Galaxy_Object;
}

void RandomMapGenerator::generate()
{
    std::cout << "Complicated generation algorithm..." << std::endl;
}
