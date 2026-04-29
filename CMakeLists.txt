cmake_minimum_required(VERSION 3.22)
project(monsters)

set(CMAKE_CXX_STANDARD 23)

add_executable(monsters src/main.cpp src/PortraitGenerator.cpp src/PortraitGenerator.h src/Monster.cpp src/Monster.h src/Random.cpp src/Random.h)
