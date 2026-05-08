#include "AsteroidField.h"
#include "Civilization.h"
#include "Planet.h"
#include "Star.h"
#include "Resource.h"
#include "GalacticMarket.h"
#include "BlackHole.h"
#include "PeopleCarrier.h"
#include "ResourceCarrier.h"

int main()
{
    const auto Sun = new Star("Sun", { 0, 0 });

    auto* Humans = new Civilization("Humans", 8000, 0.67);
    auto* Martians = new Civilization("Martians", 8100, 0.68);

    auto* Stone = new Resource("Stone");
    auto* Diamond = new Resource("Diamond");
    auto* Wood = new Resource("Wood");

    auto* SupperMassiveBlackHole = new BlackHole({100, 1000}, 100);

    auto* AsteroidBelt = new AsteroidField({250,250}, 50, 2);

    auto* PeopleCarrier1 = new PeopleCarrier({0,0});

    auto* ResourceCarrier1 = new ResourceCarrier({0,0});

    const auto Earth = new Planet("Earth", { Humans, Martians }, Sun, 7, 365, {Stone, Diamond, Wood});

    Earth->ShowInformation();

    Earth->CivilisationsWar(0, 1);

    Earth->ShowInformation();

    auto* EarthMarket = new GalacticMarket();
    EarthMarket->AddListing({ *Stone, 100, 10 });
    EarthMarket->AddListing({ *Diamond, 10, 6767 });

    EarthMarket->PrintPageOfListings(0);

    Martians->ResearchPlanet(Earth);

    Earth->GlobalWarming();

    Earth->ShowInformation();

    Martians->ManipulateMarket(EarthMarket, 767, 1);

    EarthMarket->PrintPageOfListings(0);

    PeopleCarrier1->ShowInformation();

    PeopleCarrier1->LoadShip(500, Martians);

    PeopleCarrier1->ShowInformation();

    ResourceCarrier1->ShowInformation();

    ChangePosition(AsteroidBelt, {300,300});
    ChangePosition(Sun, {100,100});
    ChangePosition(Earth, {0,0});
    ChangePosition(SupperMassiveBlackHole, {0,100});

}
