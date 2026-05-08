#include "IsUpdatable.h"

void IsUpdatable::Pause()
{
    isPaused = true;
}

void IsUpdatable::Resume()
{
    isPaused = false;
}

bool IsUpdatable::IsActive() const
{
    return isPaused;
}

int IsUpdatable::GetLastUpdate() const
{
    return lastUpdate;
}