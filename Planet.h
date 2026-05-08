#ifndef PLANET_H
#define PLANET_H

#include <string>
#include <vector>

#include "CelestialBody.h"
#include "Civilization.h"
#include "IsUpdatable.h"
#include "Star.h"
#include "Resource.h"

class Civilization;

class Planet : public CelestialBody, IsUpdatable{
private:
	std::string Name;
	std::vector<Civilization*> Inhabitants;
	std::vector<Resource*> AvailableResources{};

public:
	Planet(const std::string &Name, std::initializer_list<Civilization *> Inhabitants, Coordinates Barycenter,
	       float DistanceFromBarycenter, float RevolutionSpeed, std::initializer_list<Resource *> AvailableResources);

	~Planet() override;

	friend class Civilization;

	friend void ChangePosition(Planet* Planet, Coordinates Position);

	void UpdatePosition(int Tick) override;

	void ShowInformation() override;

	void WipeCivilisation(int CivilisationIndex);

	bool CompareStrengths(int AttackersIndex, int DefendersIndex) const;

	void CivilisationsWar(int AttackersIndex, int DefendersIndex);

	float getCombinedMilitaryCapabilities() const;

	std::string getName() override;

	Coordinates getPosition() override;

	void GlobalWarming();

	float getRevolutionSpeed() override;

	int CalculateRevolutionTime() override;

	void Update() override;

};

void ChangePosition(Planet* Planet, Galaxy_Object::Coordinates Position);

#endif //PLANET_H
