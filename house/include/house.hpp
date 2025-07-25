#pragma once

#include <speaker.hpp>
#include <map>

class House {
private:

    std::map<std::string, Speaker> speakers;

public:

    Speaker& operator[](std::string name);

    Speaker operator[](std::string name) const;

};