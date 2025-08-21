cmake_minimum_required(VERSION 3.16)

project(NBodySim VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(nbody src/main.cpp)

get_cmake_property(_vars VARIABLES)
foreach(_var ${_vars})
    message(STATUS "${_var} = ${${_var}}")
endforeach()