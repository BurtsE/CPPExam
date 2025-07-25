cmake_minimum_required(VERSION 3.16)
project (speaker)

add_library(speaker STATIC source/speaker.cpp)

target_include_directories(speaker PUBLIC include)

target_link_libraries(speaker PUBLIC room smart_device active_device sensor_device composite_device)