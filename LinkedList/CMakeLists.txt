cmake_minimum_required(VERSION 3.16)

project(LinkedList)

set(CMAKE_C_STANDARD 11)

file(GLOB SRC_FILES ./src/*.c)

add_executable(LinkedList ${SRC_FILES})