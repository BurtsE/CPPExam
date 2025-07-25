#include "sensor_device.hpp"

std::string SensorDevice::indicate_value() {

    std::srand(std::time({}));

    auto res = std::string("result value: ");
    
    res.append(std::to_string(std::rand()));

    return res;
}

DeviceType SensorDevice::get_type() {

    return DeviceType::ACTIVE;
    
}
