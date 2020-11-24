cmake_minimum_required(VERSION 3.16)

set(This CmakeGtestExample)

project(${This} C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(googletest)

enable_testing()

set(Headers
    Example.hpp
)
set(Sources
    Example.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)