cmake_minimum_required(VERSION 3.16)
project (house)


add_library(house PUBLIC source/house.cpp)

target_include_directories(house PUBLIC include)

target_link_libraries(house PUBLIC speaker)