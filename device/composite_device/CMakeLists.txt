cmake_minimum_required(VERSION 3.16)
project (composite_device)

set(CMAKE_CXX_STANDARD 23)

add_library(composite_device STATIC source/composite_device.cpp)

target_include_directories(composite_device PUBLIC include)

target_link_libraries(composite_device PUBLIC active_device sensor_device)



