cmake_minimum_required(VERSION 3.22)
project(Labs)

set(CMAKE_CXX_STANDARD 14)


# Make sure to choose only ONE option

add_executable(Labs functions.h test/test.cpp ) # uncomment this line to run tests

#add_executable(Labs main.cpp functions.h) # uncomment this line to run main program