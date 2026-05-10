#ifndef STAR_H
#define STAR_H

#include <string>

#include "GalaxyObject.h"

class Star : public GalaxyObject
{
private:
    std::string name;

public:
    Star(const std::string &name, Coordinates position);

    friend void ChangePosition(Star* star, Coordinates position);

    [[nodiscard]] Coordinates getPosition() const;
};

void ChangePosition(Star* star, GalaxyObject::Coordinates position);

#endif //STAR_H
