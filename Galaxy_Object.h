#ifndef GALAXY_H
#define GALAXY_H

class Galaxy_Object {
public:
    struct Coordinates
    {
        double X;
        double Y;

        bool operator==(const Coordinates &other) const {
            return X == other.X && Y == other.Y;
        }
    };
    Coordinates Position{};
    static int Tick;

    Galaxy_Object() = default;

    virtual ~Galaxy_Object() = default;

    explicit Galaxy_Object(Coordinates Position);

    static void IterateTick();
};

#endif //GALAXY_H