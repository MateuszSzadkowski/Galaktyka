#ifndef STAR_H
#define STAR_H

#include <string>

#include "Galaxy_Object.h"

class Star : Galaxy_Object {
private:
    std::string Name;

public:
    Star(const std::string &Name, Coordinates Position);

    friend void ChangePosition(Star* Star, Coordinates Position);

    [[nodiscard]] Coordinates getPosition() const;
};

void ChangePosition(Star* Star, Galaxy_Object::Coordinates Position);

#endif //STAR_H
