project(SpiralOrder)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)

include_directories(./include)

file(GLOB SRC_FILES ./src/*.cpp)

add_executable(SpiralOrder ${SRC_FILES})