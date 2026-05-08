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
    long int PopulationInMillions;
    double MilitaryRating;
    std::string Name;
    std::vector<SpaceShip*> Fleet;
    std::vector<Resource*> Resources{};

public:
    Civilization(const std::string &Name, long int PopulationInMillions, double MilitaryRating);

    ~Civilization();

    friend class Planet;

    friend class SpaceShip;

    void ShowInformation() const;

    [[nodiscard]] long long int getPopulation() const;

    [[nodiscard]] std::string getName() const;

    [[nodiscard]] double getMilitaryCapabilities() const;

    void SufferLosses(long int Losses);

    void ExtractResources(Planet* Planet, Resource* Resource);

    void ConstructSpaceship();

    void ResearchPlanet(Planet* Planet);

    void ManipulateMarket(const GalacticMarket* GalacticMarket, float Price, int ListingNumber);

};

#endif //CIVILISATION_H
