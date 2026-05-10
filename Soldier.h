#ifndef SOLDIER_H
#define SOLDIER_H
#include "Specialisation.h"

class Soldier : public Specialisation
{
private:
    const unsigned int health = 100;
    const double baseMilitaryRating = 10.0;
public:
    Soldier();
    Soldier(std::string name, unsigned int health, double baseMilitaryRating);

};



#endif //SOLDIER_H
