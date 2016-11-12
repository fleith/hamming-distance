cmake_minimum_required(VERSION 3.2)
project(hamming_distance)

enable_testing()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(src/lib)
add_subdirectory(src/app)
add_subdirectory(src/test)
