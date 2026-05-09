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
    const auto sun = new Star("Sun", { 0, 0 });

    auto* humans = new Civilization("Humans", 8000, 0.67);
    auto* martians = new Civilization("Martians", 8100, 0.68);

    auto* stone = new Resource("Stone");
    auto* diamond = new Resource("Diamond");
    auto* wood = new Resource("Wood");

    auto* supperMassiveBlackHole = new BlackHole({100, 1000}, 100);

    auto* asteroidBelt = new AsteroidField({250,250}, 50, 2);

    auto* peopleCarrier1 = new PeopleCarrier({0,0});

    auto* resourceCarrier1 = new ResourceCarrier({0,0});

    const auto earth = new Planet("Earth", { humans, martians }, {sun->getPosition().x, sun->getPosition().y}, 7, 365, {stone, diamond, wood});

    earth->ShowInformation();

    earth->CivilisationsWar(0, 1);

    earth->ShowInformation();

    auto* earthMarket = new GalacticMarket();
    earthMarket->AddListing({ *stone, 100, 10 });
    earthMarket->AddListing({ *diamond, 10, 6767 });

    earthMarket->PrintPageOfListings(0);

    martians->ResearchPlanet(earth);

    earth->GlobalWarming();

    earth->ShowInformation();

    martians->ManipulateMarket(earthMarket, 767, 1);

    earthMarket->PrintPageOfListings(0);

    peopleCarrier1->ShowInformation();

    peopleCarrier1->LoadShip(500, martians);

    peopleCarrier1->ShowInformation();

    resourceCarrier1->ShowInformation();

    ChangePosition(asteroidBelt, {300,300});
    ChangePosition(sun, {100,100});
    ChangePosition(earth, {0,0});
    ChangePosition(supperMassiveBlackHole, {0,100});

}
