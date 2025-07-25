cmake_minimum_required(VERSION 3.16)
project (exam)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")


add_subdirectory(device)
add_subdirectory(room)
add_subdirectory(speaker)
add_subdirectory(house)
add_subdirectory(cmd)





