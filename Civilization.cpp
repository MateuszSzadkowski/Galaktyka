#include "Civilization.h"
#include <iostream>
#include <ranges>

#include "Citizen.h"
#include "Soldier.h"

Civilization::Civilization(const std::string &name, const double baseMilitaryRating,
                           const long long int populationCount, Planet *homePlanet) : baseMilitaryRating(baseMilitaryRating)
{
    this->name = name;
    this->population.emplace(new Soldier, static_cast<unsigned long long int>(baseMilitaryRating * static_cast<double>(populationCount)));
    this->population.emplace(new Citizen, static_cast<unsigned long long int>(static_cast<double>(populationCount) - baseMilitaryRating * static_cast<double>(populationCount)));
    this->homePlanet = homePlanet;
    this->militaryRating = baseMilitaryRating;
}

Civilization::~Civilization()
{
    for (auto const& spaceShip : std::views::keys(fleet)) {
        delete spaceShip;
    }
    fleet.clear();

    for (const Resource* resource : resources) {
        delete resource;
    }
    resources.clear();
}

unsigned long long int Civilization::getPopulationCount() const
{
    unsigned long long int populationCount = 0;
    for(auto const& count : std::views::values(population))
    {
        populationCount += count;
    }
    return populationCount;
}

void Civilization::ShowInformation() const
{
    std::cout << "Name: " << name << std::endl << "Population: " << getPopulationCount() << " mil." << std::endl << "Military Rating: " << militaryRating << std::endl;
}

std::string Civilization::getName() const
{
    return name;
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