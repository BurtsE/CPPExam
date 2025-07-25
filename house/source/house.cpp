#include "house.hpp"

Speaker& House::operator[] (std::string name){

    return speakers.at(name);

}

Speaker House::operator[] (std::string name) const {

    return speakers.at(name);

}

std::ostream& operator <<(std::ostream& s, const House& h) {

    auto speakers = h.speakers;

    s << "Speakers list: " << std::endl;

    for (auto it = speakers.begin(); it != speakers.end(); ++it) {

        s << it->first << std::endl;

    }

    return s;
    
}