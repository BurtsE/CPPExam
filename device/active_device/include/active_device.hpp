#pragma once

#include <smart_device.hpp>

class ActiveDevice : virtual public SmartDevice {
private:

    bool is_active_ = false;

public:

    ActiveDevice(unsigned id, std::string name): SmartDevice(id, name){};

    void toggle();

    bool is_active();

    DeviceType get_type() override ;

    ~ActiveDevice() override = default;

};


