#ifndef ISUPDATABLE_H
#define ISUPDATABLE_H

class IsUpdatable
{
public:
    bool isPaused{};
    int lastUpdate{};

    virtual ~IsUpdatable() = default;

    virtual void Update() = 0;
    virtual void Pause();
    virtual void Resume();
    [[nodiscard]] virtual bool IsActive() const;
    [[nodiscard]] virtual int GetLastUpdate() const;
};

#endif //ISUPDATABLE_H
