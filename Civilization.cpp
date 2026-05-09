#include "Civilization.h"
#include <iostream>

Civilization::Civilization(const std::string &name, const long int populationInMillions, const double militaryRating)
{
    this->name = name;
    this->populationInMillions = populationInMillions;
    if (militaryRating >= 0 && militaryRating <= 2)
        this->militaryRating = militaryRating;
    else
        this->militaryRating = 0;
}

Civilization::~Civilization()
{
    for(const auto & i : fleet)
    {
        delete i;
    }
}

void Civilization::ShowInformation() const
{
    std::cout << "Name: " << name << std::endl << "Population: " << populationInMillions << " mil." << std::endl << "Military Rating: " << militaryRating << std::endl;
}

long long int Civilization::getPopulation() const
{
    return populationInMillions;
}

std::string Civilization::getName() const
{
    return name;
}

double Civilization::getMilitaryCapabilities() const
{
    return militaryRating * populationInMillions;
}

void Civilization::SufferLosses(long int losses)
{
    populationInMillions -= losses;
}

void Civilization::ExtractResources(Planet* planet, Resource* resource)
{

}

void Civilization::ConstructSpaceship()
{

}

void Civilization::ResearchPlanet(Planet* planet)
{
    std::cout << "Planet's distance form star: " << planet->distanceFromBarycenter << std::endl << "Planets Revolution Time: " << planet->CalculateRevolutionTime() << std::endl;
}

void Civilization::ManipulateMarket(const GalacticMarket* galacticMarket, const float price, const int listingNumber)
{
    galacticMarket->listings[listingNumber].pricePerUnit -= price;
}