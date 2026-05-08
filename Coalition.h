#ifndef COALITION_H
#define COALITION_H

#include <vector>
#include "Civilization.h"

class Coalition {
private:
    std::vector<Civilization*> CoalitionParties;
    float CoalitionStrength;

public:
    Coalition(std::initializer_list<Civilization*> CoalitionParties, float CoalitionStrength);

};

#endif //COALITION_H
