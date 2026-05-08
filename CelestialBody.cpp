#include "CelestialBody.h"

CelestialBody::CelestialBody(const Coordinates Barycenter, const float DistanceFromBarycenter, const float RevolutionSpeed) {
    this->Barycenter = Barycenter;
    this->DistanceFromBarycenter = DistanceFromBarycenter;
    this->RevolutionSpeed = RevolutionSpeed;
}
