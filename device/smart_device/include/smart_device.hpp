#pragma once

#include <string>

enum class DeviceType {
    ACTIVE, 
    SENSOR,
    COMPOSITE
};

class SmartDevice {
protected:

    unsigned ID_;

    std::string name_;

    bool is_online_;

public:

    SmartDevice(unsigned id, std::string name): ID_(id), name_(name), is_online_(false){};

    unsigned ID();
    
    std::string name();

    bool is_online();

    virtual DeviceType get_type() = 0 ;
    
    virtual ~SmartDevice() = default;

};