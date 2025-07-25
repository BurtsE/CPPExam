#pragma once

#include <vector>
#include <string>
#include <memory>
#include <map>
#include <iostream>


#include <room.hpp>
#include <smart_device.hpp>
#include <active_device.hpp>
#include <sensor_device.hpp>
#include <composite_device.hpp>

class Speaker {
private:

    Room room;

    std::map<int, int> id_to_index;

    std::vector<std::shared_ptr<SmartDevice>> device_list;

public:

    Speaker(Room _room): room(_room){};

    std::string get_name();

    int get_room_number();

    std::string get_room_type();

    std::shared_ptr<SmartDevice> get_device(int id);

    void add_device(std::shared_ptr<SmartDevice>);

    bool remove_device(int id);

    void activate_all();
};