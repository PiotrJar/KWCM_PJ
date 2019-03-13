cmake_minimum_required (VERSION 2.8)
project (PierwszyProgram)
add_executable(PierwszyProgram main.cpp)

include_directories ("${PROJECT_SOURCE_DIR}/trygonometria")
add_subdirectory (trygonometria)
target_link_libraries (PierwszyProgram trygonometria)
