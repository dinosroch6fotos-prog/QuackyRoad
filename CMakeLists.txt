cmake_minimum_required(VERSION 3.10)
project(QuackyRoad)

set(CMAKE_CXX_STANDARD 17)

add_executable(QuackyRoad src/main.cpp)
target_link_libraries(QuackyRoad raylib)
