#ifndef RESOURCE_H
#define RESOURCE_H

#include <string>

class Resource
{
private:
    std::string Type;

public:
    explicit Resource(const std::string &Type);

    std::string getType();

};

#endif //RESOURCE_H
