cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)

project(LinkedList_CPP)

file(GLOB SRC_FILES ./src/*.cpp)

add_executable(LinkedList_CPP ${SRC_FILES})
