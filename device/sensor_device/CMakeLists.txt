cmake_minimum_required(VERSION 3.16)
project (sensor_device)

set(CMAKE_CXX_STANDARD 23)

add_library(sensor_device STATIC source/sensor_device.cpp)

target_include_directories(sensor_device PUBLIC include)

target_link_libraries(sensor_device PUBLIC smart_device)



