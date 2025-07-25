#pragma once

#include <smart_device.hpp>
#include <cstdlib>
#include <string>
#include <ctime>


class SensorDevice : virtual public SmartDevice {

public:

    SensorDevice(unsigned id, std::string name): SmartDevice(id, name) {} ;

    std::string indicate_value();

    DeviceType get_type() override;

    ~SensorDevice() override = default;

};


