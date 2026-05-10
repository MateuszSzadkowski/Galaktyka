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

class Planet : public CelestialBody, public IsUpdatable
{
private:
	std::string name;
	std::vector<Civilization*> inhabitants;
	std::vector<Resource*> availableResources{};

public:
	Planet(const std::string &name, Coordinates barycenter,
	       float distanceFromBarycenter, float revolutionSpeed, std::initializer_list<Resource *> availableResources);

	~Planet() override;

	friend class Civilization;

	friend void ChangePosition(Planet* planet, Coordinates position);

	void UpdatePosition(int tick) override;

	void ShowInformation() override;

	std::string getName() override;

	Coordinates getPosition() override;

	void GlobalWarming();

	float getRevolutionSpeed() override;

	int CalculateRevolutionTime() override;

	void Update() override;



};

void ChangePosition(Planet* planet, GalaxyObject::Coordinates position);

#endif //PLANET_H
