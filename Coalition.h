#ifndef COALITION_H
#define COALITION_H

#include <vector>
#include "Civilization.h"

class Coalition
{
private:
    std::vector<Civilization*> coalitionParties;
    float coalitionStrength;

public:
    Coalition(std::initializer_list<Civilization*> coalitionParties, float coalitionStrength);

};

#endif //COALITION_H
