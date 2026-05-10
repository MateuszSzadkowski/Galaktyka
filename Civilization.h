#ifndef CIVILISATION_H
#define CIVILISATION_H

#include <string>
#include <vector>
#include <map>

#include "GalacticMarket.h"
#include "SpaceShip.h"
#include "Planet.h"
#include "Resource.h"
#include "Specialisation.h"

class Planet;

class SpaceShip;

class Citizen;

class Civilization
{
private:
    std::map<Specialisation*, unsigned long long int> population{};
    const double baseMilitaryRating;
    double militaryRating;
    std::string name;
    std::map<Vehicle*, unsigned int> fleet{};
    std::vector<Resource*> resources{};
    Planet* homePlanet;

public:
    Civilization(const std::string &name, double baseMilitaryRating, long long int populationCount, Planet *homePlanet);

    ~Civilization();

    friend class Planet;

    friend class SpaceShip;

    [[nodiscard]] unsigned long long int getPopulationCount() const;

    void ShowInformation() const;

    [[nodiscard]] std::string getName() const;

    void ExtractResources(Planet* planet, Resource* resource);

    void ConstructSpaceship();

    void ResearchPlanet(Planet* planet);

    void ManipulateMarket(const GalacticMarket* galacticMarket, float price, int listingNumber);

};

#endif //CIVILISATION_H
