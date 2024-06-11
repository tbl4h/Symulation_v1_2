cmake_minimum_required(VERSION 3.0)

project(symulation_v1_2)

add_subdirectory(SymulationLib)

add_executable(symulation_v1_2 main.cpp)


install(TARGETS symulation_v1_2 RUNTIME DESTINATION bin)


target_link_libraries(symulation_v1_2 PRIVATE SymulationLib)
