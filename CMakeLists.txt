cmake_minimum_required(VERSION 3.16)
project(Engine)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(test)

add_executable(Engine main.cpp math/Vector.cpp math/Vector.h test/TestVector.cpp)