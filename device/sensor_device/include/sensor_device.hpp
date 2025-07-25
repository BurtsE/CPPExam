#pragma once

#include <smart_device.hpp>
#include <cstdlib>
#include <string>
#include <ctime>


class SensorDevice : public SmartDevice {

public:
    SensorDevice() = default;

    ~SensorDevice() = default;

    std::string indicate_value();

    DeviceType get_type() override ;

};


