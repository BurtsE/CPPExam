#pragma once

#include <string>

class Room {
private:
    std::string name_;

    std::string room_type_;

    int room_number_;

public:

    Room(std::string _name): name_(_name){}

    Room(std::string _name, std::string _room_type, int _room_number):
        name_(_name), room_type_(_room_type), room_number_(_room_number){};

    std::string name();

    std::string room_type();

    int room_number();

};