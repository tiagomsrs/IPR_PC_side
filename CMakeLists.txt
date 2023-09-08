cmake_minimum_required(VERSION 3.15)

set(EXE_NAME random_generator_app)

project(${EXE_NAME})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_EXTENSIONS FALSE)

add_executable(${EXE_NAME}
               src/generator_main.cpp
               src/random_generator.cpp)

target_include_directories(${EXE_NAME}
PUBLIC
    include
)