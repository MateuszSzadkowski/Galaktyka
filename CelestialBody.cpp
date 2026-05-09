#include "CelestialBody.h"

CelestialBody::CelestialBody(const Coordinates barycenter, const float distanceFromBarycenter, const float revolutionSpeed)
{
    this->barycenter = barycenter;
    this->distanceFromBarycenter = distanceFromBarycenter;
    this->revolutionSpeed = revolutionSpeed;
}
