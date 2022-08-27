project(HappyNumber)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)

file(GLOB SRC_FILES ./src/*.cpp)

add_executable(HappyNumber ${SRC_FILES})