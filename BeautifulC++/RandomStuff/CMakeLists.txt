project(RandomStuff)
set(CMAKE_CXX_STANDARD 14)

file(GLOB SRC_FILES ./src/*.cpp)

add_executable(RandomStuff ${SRC_FILES})