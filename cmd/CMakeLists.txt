cmake_minimum_required(VERSION 3.16)
project (main)

add_executable(my_app ./source/main.cpp)

target_link_libraries(my_app PUBLIC house speaker smart_device active_device sensor_device composite_device)
