cmake_minimum_required(VERSION 3.16)
project (device)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(active_device)
add_subdirectory(smart_device)
add_subdirectory(sensor_device)
add_subdirectory(composite_device)


