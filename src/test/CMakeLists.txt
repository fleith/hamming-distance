cmake_minimum_required(VERSION 3.6)
project(hamming_distance_tests)


find_package(PythonInterp 3.5.1 REQUIRED)

set(GTEST_INCLUDE_DIRS ${CMAKE_SOURCE_DIR}/src/3rdparty/googletest)
set(GTEST_ALL_SRC ${GTEST_INCLUDE_DIRS}/gmock-gtest-all.cc HammingDistanceTest.cpp)

include_directories("${GTEST_INCLUDE_DIRS}")
include_directories(../lib)

aux_source_directory(. TEST_FILES)
#set(TEST_FILES main.cpp)

add_executable(hamming_distance_tests ${TEST_FILES} ${GTEST_ALL_SRC})
target_link_libraries(hamming_distance_tests hamming_distance)
#add_test(HammingDistanceTest hamming_distance_tests --gtest_filter=HammingDistanceTest*)

add_test(NAME acceptance COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_SOURCE_DIR}/src/test/test_acceptance.py ${CMAKE_BINARY_DIR}/src/app/hdc)
