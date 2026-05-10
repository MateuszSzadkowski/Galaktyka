#include "Planet.h"
#include <cmath>
#include <iostream>

#define PI 3.14159265

Planet::Planet(const std::string &name, const Coordinates barycenter,
               const float distanceFromBarycenter, const float revolutionSpeed,
               const std::initializer_list<Resource *> availableResources) : CelestialBody(barycenter, distanceFromBarycenter, revolutionSpeed)
{
	this->name = name;
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
		inhabitant->population = static_cast<int>(inhabitant->getMilitaryCapabilities() * 0.9);
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
