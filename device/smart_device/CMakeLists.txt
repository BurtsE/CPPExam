cmake_minimum_required(VERSION 3.16)
project (smart_device)

set(CMAKE_CXX_STANDARD 23)

add_library(smart_device STATIC source/smart_device.cpp)

target_include_directories(smart_device PUBLIC include)