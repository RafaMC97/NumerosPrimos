cmake_minimum_required(VERSION 3.5)
project(ES_II_NumerosPrimos)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(ES_II_NumerosPrimos ${SOURCE_FILES})