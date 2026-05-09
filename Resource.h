#ifndef RESOURCE_H
#define RESOURCE_H

#include <string>

class Resource
{
private:
    std::string type;

public:
    explicit Resource(const std::string &type);

    std::string getType();

};

#endif //RESOURCE_H
