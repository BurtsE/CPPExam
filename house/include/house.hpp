#pragma once

#include <speaker.hpp>
#include <map>


// House хранит Speaker's в map, ключ - имя колонки
// По умолчанию map хранит значения, сортируя их по ключу

class House {
private:

    std::map<std::string, Speaker> speakers;

public:

    House() = default;

    void add_speaker(std::string name, Speaker s) { speakers.emplace(name, s); };

    Speaker& operator[](std::string name);

    Speaker operator[](std::string name) const;

    friend std::ostream& operator <<(std::ostream& s, const House& h);

};