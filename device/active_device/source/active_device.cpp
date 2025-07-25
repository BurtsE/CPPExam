#include "active_device.hpp"

DeviceType ActiveDevice::get_type() {
    return DeviceType::ACTIVE;
}

bool ActiveDevice::is_active() {
    return is_active_;
}