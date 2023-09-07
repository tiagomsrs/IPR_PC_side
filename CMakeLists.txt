cmake_minimum_required(VERSION 3.15)

project(RandomGenerator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_EXTENSIONS FALSE)

add_executable(generator_main generator_main.cpp)