#include "house.hpp"

Speaker& House::operator[] (std::string name){

    return speakers[name];

}

Speaker House::operator[] (std::string name) const {

    return speakers[name];

}