#pragma once

#include <smart_device.hpp>

class ActiveDevice : public SmartDevice {
private:

    bool is_active_ = false;

public:
    ActiveDevice() = default;

    ~ActiveDevice() = default;

    void toggle();

    bool is_active();

    DeviceType get_type() override ;

};


