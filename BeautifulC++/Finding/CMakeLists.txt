project(Finding)
set(CMAKE_CXX_STANDARD 14)

file(GLOB SRC_FILES ./src/*.cpp)

add_executable(Finding ${SRC_FILES})