#include "Civilization.h"
#include <iostream>

Civilization::Civilization(const std::string &Name, const long int PopulationInMillions, const double MilitaryRating) {
    this->Name = Name;
    this->PopulationInMillions = PopulationInMillions;
    if (MilitaryRating >= 0 && MilitaryRating <= 2)
        this->MilitaryRating = MilitaryRating;
    else
        this->MilitaryRating = 0;
}

Civilization::~Civilization()
{
    for(const auto & i : Fleet)
    {
        delete i;
    }
}

void Civilization::ShowInformation() const {
    std::cout << "Name: " << Name << std::endl << "Population: " << PopulationInMillions << " mil." << std::endl << "Military Rating: " << MilitaryRating << std::endl;
}

long long int Civilization::getPopulation() const
{
    return PopulationInMillions;
}

std::string Civilization::getName() const
{
    return Name;
}

double Civilization::getMilitaryCapabilities() const
{
    return MilitaryRating * PopulationInMillions;
}

void Civilization::SufferLosses(long int Losses)
{
    PopulationInMillions -= Losses;
}

void Civilization::ExtractResources(Planet* Planet, Resource* Resource)
{

}

void Civilization::ConstructSpaceship()
{

}

void Civilization::ResearchPlanet(const Planet* Planet) {
    std::cout << "Planet's distance form star: " << Planet->DistanceFromBarycenter << std::endl << "Planets Revolution Time: " << Planet->RevolutionTime << std::endl;
}

void Civilization::ManipulateMarket(const GalacticMarket* GalacticMarket, const float Price, const int ListingNumber) {

    GalacticMarket->Listings[ListingNumber].PricePerUnit -= Price;

}