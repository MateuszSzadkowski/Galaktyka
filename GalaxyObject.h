#ifndef GALAXY_H
#define GALAXY_H

class GalaxyObject
{
public:
    struct Coordinates
    {
        double x;
        double y;

        bool operator==(const Coordinates &other) const {
            return x == other.x && y == other.y;
        }
    };
    Coordinates position{};
    static int tick;
    static unsigned long long int numberOfObjects;
    unsigned long long int id{};

    GalaxyObject() = default;

    virtual ~GalaxyObject() = default;

    explicit GalaxyObject(Coordinates position);

    static void iterateTick();
};

#endif //GALAXY_H