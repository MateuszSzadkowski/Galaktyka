#include "Soldier.h"

#include <utility>

Soldier::Soldier() : Specialisation("Soldier"){}

Soldier::Soldier(std::string name, const unsigned int health, const double baseMilitaryRating) : Specialisation(std::move(name)), health(health), baseMilitaryRating(baseMilitaryRating){}