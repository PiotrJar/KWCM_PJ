cmake_minimum_required (VERSION 2.8)
project (PierwszyProgram)
add_executable(PierwszyProgram main.cpp)

option (USE_TRIGONOMETRY_DEGREE "Czy argumentami funkcji trygonometrycznych maja byc stopnie" ON)

if (USE_TRIGONOMETRY_DEGREE)
include_directories ("${PROJECT_SOURCE_DIR}/trygonometria")
add_subdirectory (trygonometria)
target_link_libraries (PierwszyProgram trygonometria)
endif (USE_TRIGONOMETRY_DEGREE)

configure_file (
"${PROJECT_SOURCE_DIR}/PierwszyProgramConfig.h.in"
"${PROJECT_SOURCE_DIR}/PierwszyProgramConfig.h"
)
include_directories("PROJECT_BINARY_DIR")

enable_testing()

if(BUILD_TESTS)
add_test (LaborkaPodstawowyTest PierwszyProgram)
add_test (LaborkaWynikSin45 PierwszyProgram 45)
set_tests_properties (LaborkaWynikSin45
PROPERTIES PASS_REGULAR_EXPRESSION "0[.,]70710")
add_test (Laborka3sek PierwszyProgram 45)
set_tests_properties (Laborka3sek
PROPERTIES TIMEOUT 3)
endif(BUILD_TESTS)
