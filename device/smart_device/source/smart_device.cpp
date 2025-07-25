#include "smart_device.hpp"

unsigned SmartDevice::ID() { return ID_; };

bool SmartDevice::is_online() { return is_online_; };

std::string SmartDevice::name() { return name_; };