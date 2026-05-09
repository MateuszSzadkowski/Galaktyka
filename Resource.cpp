#include "Resource.h"

Resource::Resource(const std::string &type)
{
    this->type = type;
}

std::string Resource::getType()
{
    return type;
}