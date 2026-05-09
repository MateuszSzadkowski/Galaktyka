#include "Coalition.h"


Coalition::Coalition(const std::initializer_list<Civilization*> coalitionParties, const float coalitionStrength)
{
    this->coalitionParties = coalitionParties;
    this->coalitionStrength = coalitionStrength;
}