cmake_minimum_required(VERSION 4.0)
project(tiny_math)

set(CMAKE_CXX_STANDARD 26)

add_library(tiny_math INTERFACE)

target_include_directories(tiny_math INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/lib)

option(TINYMATH_BUILD_TEST "Build test executable" OFF)
if (TINYMATH_BUILD_TEST)
    add_executable(test test.cpp)
    target_link_libraries(test PRIVATE tiny_math)
endif ()
