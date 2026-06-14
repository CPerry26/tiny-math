cmake_minimum_required(VERSION 4.0)
project(tiny_math)

set(CMAKE_CXX_STANDARD 26)

add_library(tiny_math STATIC library.cpp
        lib/vector.h)
