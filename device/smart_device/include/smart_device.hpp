#pragma once

#include <string>

enum class DeviceType {
    ACTIVE, 
    SMART,
    COMPOSITE
};

class SmartDevice {
private:

    int ID_;

    std::string name_;

    bool is_online_;

public:

    int ID();
    
    std::string name();

    bool is_online();

    virtual DeviceType get_type() = 0 ;
    
    virtual ~SmartDevice() = 0;

};