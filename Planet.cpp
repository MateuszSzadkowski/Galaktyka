#include "Planet.h"
#include <cmath>
#include <iostream>

#define PI 3.14159265

Planet::Planet(const std::string &name, const std::initializer_list<Civilization *> inhabitants, const Coordinates barycenter,
               const float distanceFromBarycenter, const float revolutionSpeed,
               const std::initializer_list<Resource *> availableResources) : CelestialBody(barycenter, distanceFromBarycenter, revolutionSpeed)
{
	this->name = name;
	this->inhabitants = inhabitants;
	this->position = {barycenter.x + distanceFromBarycenter, barycenter.y};
	this->availableResources = availableResources;
}

Planet::~Planet()
{
	for(const auto & inhabitant : inhabitants)
	{
		delete inhabitant;
	}
}

int Planet::CalculateRevolutionTime()
{
	return static_cast<int>(2 * PI * distanceFromBarycenter / revolutionSpeed);
}

void Planet::UpdatePosition(const int tick)
{
	const double degree = 2 * PI * ( ( tick % CalculateRevolutionTime() ) / static_cast<double>(CalculateRevolutionTime()) );
	position = { barycenter.x + sin(degree) * distanceFromBarycenter, barycenter.y + cos(degree) * distanceFromBarycenter };
}

void Planet::ShowInformation()
{
	std::cout << "Planet: " << name << ", " << distanceFromBarycenter << " Light minutes from it's star." << std::endl << "Civilisations: " << std::endl << std::endl;
	for (int i = 0; i < inhabitants.size(); i++)
	{
		std::cout << i << "." << std::endl;
		inhabitants[i]->ShowInformation();
		std::cout << std::endl;
	}
}

void Planet::WipeCivilisation(const int civilisationIndex)
{
	delete inhabitants[civilisationIndex];
	inhabitants.erase(inhabitants.begin() + civilisationIndex);
}

bool Planet::CompareStrengths(const int attackersIndex, const int defendersIndex) const
{
	if (inhabitants[attackersIndex]->getMilitaryCapabilities() > inhabitants[defendersIndex]->getMilitaryCapabilities())
		return true;
	else
		return false;
}

void Planet::CivilisationsWar(const int attackersIndex, const int defendersIndex)
{
	std::cout << inhabitants[attackersIndex]->getName() << " attacked " << inhabitants[defendersIndex]->getName() << std::endl;
	if (CompareStrengths(attackersIndex, defendersIndex))
	{
		inhabitants[attackersIndex]->SufferLosses(static_cast<long>(inhabitants[defendersIndex]->getMilitaryCapabilities()));
		std::cout << inhabitants[attackersIndex]->getName() << " won." << std::endl << std::endl;
		WipeCivilisation(defendersIndex);
	}
	else
	{
		inhabitants[defendersIndex]->SufferLosses(static_cast<long>(inhabitants[defendersIndex]->getMilitaryCapabilities()));
		std::cout << inhabitants[defendersIndex]->getName() << " won." << std::endl << std::endl;
		WipeCivilisation(attackersIndex);
	}
}

float Planet::getCombinedMilitaryCapabilities() const {
	float sum = 0;
	for(const auto inhabitant : inhabitants)
	{
		sum = static_cast<float>(sum + inhabitant->getMilitaryCapabilities());
	}
	return sum;
}

float Planet::getRevolutionSpeed() {
	return revolutionSpeed;
}

std::string Planet::getName()
{
	return name;
}

GalaxyObject::Coordinates Planet::getPosition()
{
	return position;
}

void Planet::GlobalWarming()
{
	for(const auto inhabitant : inhabitants)
	{
		// Wait, populationInMillions is a private member in Civilization, but wait, it was PopulationInMillions before.
		// Wait, did I rename it? Yes, populationInMillions.
		// Wait, Planet is a friend of Civilization, so it can access it.
		// Wait! Let me check the original file: Inhabitant->PopulationInMillions. Let me rename to populationInMillions.
		inhabitant->populationInMillions = static_cast<int>(inhabitant->getMilitaryCapabilities() * 0.9);
	}
}

void Planet::Update()
{
	if(!isPaused) {
		UpdatePosition(tick);
		lastUpdate = tick;
	}
}

void ChangePosition(Planet *planet, const GalaxyObject::Coordinates position)
{
	planet->position = position;
}
