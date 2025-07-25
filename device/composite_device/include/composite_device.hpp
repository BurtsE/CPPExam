#pragma once

#include <active_device.hpp>
#include <sensor_device.hpp>

class CompositeDevice: public ActiveDevice, public SensorDevice {
public:

    CompositeDevice(unsigned id, std::string name): SmartDevice(id, name), ActiveDevice(id, name), SensorDevice(id, name){};

    DeviceType get_type() override;

    ~CompositeDevice() override = default;
    
};