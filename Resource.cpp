#include "Resource.h"

Resource::Resource(const std::string &Type)
{
    this->Type = Type;
}

std::string Resource::getType()
{
    return Type;
}