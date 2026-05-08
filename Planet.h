#ifndef PLANET_H
#define PLANET_H

#include <string>
#include <vector>
#include "Civilization.h"
#include "Galaxy_Object.h"
#include "Star.h"
#include "Resource.h"

class Civilization;

class Planet : Galaxy_Object{
private:
	std::string Name;
	std::vector<Civilization*> Inhabitants;
	std::vector<Resource*> AvailableResources{};
	float DistanceFromStar;
	int RevolutionTime;
	Star* ParentStar{};

public:
	Planet(const std::string &Name, std::initializer_list<Civilization *> Inhabitants, Star *ParentStar,
	       float DistanceFromStar, int RevolutionTime, std::initializer_list<Resource *> AvailableResources);

	~Planet();

	friend class Civilization;

	friend void ChangePosition(Planet* Planet, Coordinates Position);

	void UpdatePosition(int Tick);

	void ShowInformation() const;

	void WipeCivilisation(int CivilisationIndex);

	bool CompareStrengths(int AttackersIndex, int DefendersIndex) const;

	void CivilisationsWar(int AttackersIndex, int DefendersIndex);

	float getCombinedMilitaryCapabilities() const;

	std::string getName() const;

	Coordinates getPosition() const;

	void GlobalWarming();

};

void ChangePosition(Planet* Planet, Galaxy_Object::Coordinates Position);

#endif //PLANET_H
