#include "speaker.hpp"

std::string Speaker::get_name() {

    return room.name();

}

int Speaker::get_room_number(){

    return room.room_number();

}

std::string Speaker::get_room_type(){

    return room.room_type();

}

std::shared_ptr<SmartDevice> Speaker::get_device(int id) {

    int index;

    try {

        index = id_to_index[id];

    } catch (const std::out_of_range& ex) {

        return nullptr;

    }

    
    return device_list[index];

}


void Speaker::add_device(std::shared_ptr<SmartDevice> device) {

    device_list.push_back(device);

    id_to_index[device->ID()] = device_list.size() - 1;

}

bool Speaker::remove_device(int id) {

    try {

        auto index = id_to_index[id];

        device_list.erase(device_list.begin() + index);

    } catch (const std::out_of_range& ex) {

        return false;

    }

    return true;

}

void Speaker::activate_all() {

    for (auto device: device_list) {

        auto device_type = device->get_type();

        ActiveDevice* active;
        CompositeDevice* composite;

        switch (device_type) {
        case DeviceType::ACTIVE:

            active = dynamic_cast<ActiveDevice*>(device.get());

            active->toggle();

            break;

        case DeviceType::COMPOSITE:

            composite = dynamic_cast<CompositeDevice*>(device.get());

            composite->toggle();

            break;

        default:
            break;
        }
    }
}


