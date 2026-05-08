#include "CelestialBody.h"

CelestialBody::CelestialBody(const Coordinates Barycenter, const float DistanceFromBarycenter) {
    this->Barycenter = Barycenter;
    this->DistanceFromBarycenter = DistanceFromBarycenter;
}
