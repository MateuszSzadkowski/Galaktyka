#include "Planet.h"
#include <cmath>
#include <iostream>

Planet::Planet(const std::string &Name, const std::initializer_list<Civilization *> Inhabitants, const Coordinates Barycenter,
               const float DistanceFromBarycenter, const int RevolutionTime,
               const std::initializer_list<Resource *> AvailableResources) {
	this->Name = Name;
	this->Inhabitants = Inhabitants;
	this->DistanceFromBarycenter = DistanceFromBarycenter;
	this->RevolutionTime = RevolutionTime;
	this->Position = {Barycenter.X + DistanceFromBarycenter, Barycenter.Y};
	this->AvailableResources = AvailableResources;
}

Planet::~Planet()
{
	for(const auto & Inhabitant : Inhabitants)
	{
		delete Inhabitant;
	}
}

void Planet::UpdatePosition(const int Tick)
{
	const double Degree = 2 * 3.14159f * ( ( Tick % RevolutionTime ) / static_cast<double>(RevolutionTime) );
	Position = { Barycenter.X + sin(Degree) * DistanceFromBarycenter * 100, Barycenter.Y + cos(Degree) * DistanceFromBarycenter * 100 };
}

void Planet::ShowInformation() const
{
	std::cout << "Planet: " << Name << ", " << DistanceFromBarycenter << " Light minutes from it's star." << std::endl << "Civilisations: " << std::endl << std::endl;
	for (int i = 0; i < Inhabitants.size(); i++)
	{
		std::cout << i << "." << std::endl;
		Inhabitants[i]->ShowInformation();
		std::cout << std::endl;
	}
}

void Planet::WipeCivilisation(const int CivilisationIndex)
{
	delete Inhabitants[CivilisationIndex];
	Inhabitants.erase(Inhabitants.begin() + CivilisationIndex);
}

bool Planet::CompareStrengths(const int AttackersIndex, const int DefendersIndex) const
{
	if (Inhabitants[AttackersIndex]->getMilitaryCapabilities() > Inhabitants[DefendersIndex]->getMilitaryCapabilities())
		return true;
	else
		return false;
}

void Planet::CivilisationsWar(const int AttackersIndex, const int DefendersIndex)
{
	std::cout << Inhabitants[AttackersIndex]->getName() << " attacked " << Inhabitants[DefendersIndex]->getName() << std::endl;
	if (CompareStrengths(AttackersIndex, DefendersIndex))
	{
		Inhabitants[AttackersIndex]->SufferLosses(static_cast<long>(Inhabitants[DefendersIndex]->getMilitaryCapabilities()));
		std::cout << Inhabitants[AttackersIndex]->getName() << " won." << std::endl << std::endl;
		WipeCivilisation(DefendersIndex);
	}
	else
	{
		Inhabitants[DefendersIndex]->SufferLosses(static_cast<long>(Inhabitants[DefendersIndex]->getMilitaryCapabilities()));
		std::cout << Inhabitants[DefendersIndex]->getName() << " won." << std::endl << std::endl;
		WipeCivilisation(AttackersIndex);
	}
}

float Planet::getCombinedMilitaryCapabilities() const {
	float Sum = 0;
	for(const auto Inhabitant : Inhabitants)
	{
		Sum = static_cast<float>(Sum + Inhabitant->getMilitaryCapabilities());
	}
	return Sum;
}

std::string Planet::getName() const
{
	return Name;
}

Galaxy_Object::Coordinates Planet::getPosition() const {
	return Position;
}

void Planet::GlobalWarming()
{
	for(const auto Inhabitant : Inhabitants)
	{
		Inhabitant->PopulationInMillions = static_cast<int>(Inhabitant->getMilitaryCapabilities() * 0.9);
	}
}

void ChangePosition(Planet *Planet, const Galaxy_Object::Coordinates Position)
{
	Planet->Position = Position;
}
