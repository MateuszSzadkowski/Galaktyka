#include "AsteroidField.h"

AsteroidField::AsteroidField(const Coordinates Position, const float Size, const float Density) : Galaxy_Object(Position)
{
    this->Size = Size;
    this->Density = Density;
}

void ChangePosition(AsteroidField* AsteroidField, const Galaxy_Object::Coordinates Position) {
    AsteroidField->Position = Position;
}
