#pragma once

#include <active_device.hpp>
#include <sensor_device.hpp>

class CompositeDevice: public ActiveDevice, public SensorDevice {
public:

    DeviceType get_type() override;
    
};