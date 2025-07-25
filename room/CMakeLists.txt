cmake_minimum_required(VERSION 3.16)
project (room)

add_library(room STATIC source/room.cpp)

target_include_directories(room PUBLIC include)
