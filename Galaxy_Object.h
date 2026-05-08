#ifndef GALAXY_H
#define GALAXY_H

class Galaxy_Object {
public:
    struct Coordinates
    {
        double X;
        double Y;
    };
    Coordinates Position{};
    static int Tick;

    Galaxy_Object() = default;

    virtual ~Galaxy_Object() = default;

    explicit Galaxy_Object(Coordinates Position);

    static void IterateTick();
};

#endif //GALAXY_H