#include "Coalition.h"


Coalition::Coalition(const std::initializer_list<Civilization*> CoalitionParties, const float CoalitionStrength)
{
    this->CoalitionParties = CoalitionParties;
    this->CoalitionStrength = CoalitionStrength;
}