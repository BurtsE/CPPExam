#include "sensor_device.hpp"



// Имитация вычисления

std::string SensorDevice::indicate_value() {

    std::srand(ID_);

    auto res = std::string("result value: ");
    
    res.append(std::to_string(std::rand() % 100));

    return res;
}

DeviceType SensorDevice::get_type() {

    return DeviceType::SENSOR;
    
}
