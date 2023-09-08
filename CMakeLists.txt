cmake_minimum_required(VERSION 3.15)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_EXTENSIONS FALSE)

add_executable($ENV{EXE_NAME}
               src/generator_main.cpp
               src/random_generator.cpp
               )

target_include_directories($ENV{EXE_NAME}
PRIVATE
    include
)