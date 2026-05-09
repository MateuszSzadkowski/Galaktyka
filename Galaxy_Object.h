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

    GalaxyObject() = default;

    virtual ~GalaxyObject() = default;

    explicit GalaxyObject(Coordinates position);

    static void IterateTick();
};

#endif //GALAXY_H