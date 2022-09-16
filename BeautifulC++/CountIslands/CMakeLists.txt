cmake_minimum_required(VERSION 3.23)
project(CountIslands)
set(CMAKE_CXX_STANDARD 14)

file(GLOB SRC_FILES ./src/*.cpp)

add_executable(CountIslands ${SRC_FILES})