
cmake_minimum_required(VERSION 3.0)

project(symulation_v1_2)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)

set(LIB_HEADERS
    object.h
    world.h
)

set(LIB_SOURCES
    object.cpp
    world.cpp
)

add_library(SymulationLib ${LIB_HEADERS} ${LIB_SOURCES})

target_include_directories(SymulationLib PUBLIC ${EIGEN3_INCLUDE_DIR})

