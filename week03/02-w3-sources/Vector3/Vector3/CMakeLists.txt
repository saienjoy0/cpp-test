cmake_minimum_required(VERSION 3.22)
project(Vector3)

set(CMAKE_CXX_STANDARD 14)

add_executable(point Vector3_class.cpp point.cpp Vector3_class.hpp Vector3_struct.hpp Vector3_struct.cpp Vector3_union.hpp Vector3_union.cpp)