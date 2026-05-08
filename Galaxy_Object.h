#ifndef GALAXY_H
#define GALAXY_H

class Galaxy_Object {
public:
    virtual ~Galaxy_Object() = default;

    struct Coordinates
    {
        double X;
        double Y;
    };
    Coordinates Position{};
    static int Tick;

    Galaxy_Object();

    explicit Galaxy_Object(Coordinates Position);

    static void IterateTick();
};

#endif //GALAXY_H