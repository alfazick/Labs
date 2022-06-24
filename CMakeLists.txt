cmake_minimum_required(VERSION 3.22)
project(Labs)

set(CMAKE_CXX_STANDARD 14)

add_executable(Labs main.cpp functions.h test/test.cpp test/test.h)
