cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Release)
project(IWannaMakeATree)

file(GLOB SRC_FILES ./src/*.cpp)

add_executable(IWannaMakeATree ${SRC_FILES})

include_directories(
    ./inc
)