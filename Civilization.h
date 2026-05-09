#ifndef CIVILISATION_H
#define CIVILISATION_H

#include <string>
#include <vector>

#include "GalacticMarket.h"
#include "SpaceShip.h"
#include "Planet.h"
#include "Resource.h"

class Planet;

class SpaceShip;

class Civilization
{
private:
    long int populationInMillions;
    double militaryRating;
    std::string name;
    std::vector<SpaceShip*> fleet;
    std::vector<Resource*> resources{};

public:
    Civilization(const std::string &name, long int populationInMillions, double militaryRating);

    ~Civilization();

    friend class Planet;

    friend class SpaceShip;

    void ShowInformation() const;

    [[nodiscard]] long long int getPopulation() const;

    [[nodiscard]] std::string getName() const;

    [[nodiscard]] double getMilitaryCapabilities() const;

    void SufferLosses(long int losses);

    void ExtractResources(Planet* planet, Resource* resource);

    void ConstructSpaceship();

    void ResearchPlanet(Planet* planet);

    void ManipulateMarket(const GalacticMarket* galacticMarket, float price, int listingNumber);

};

#endif //CIVILISATION_H
