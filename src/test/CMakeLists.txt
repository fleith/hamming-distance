cmake_minimum_required(VERSION 3.6)
project(hamming_distance_tests)

set(GTEST_INCLUDE_DIRS ${CMAKE_SOURCE_DIR}/src/3rdparty/googletest)
set(GTEST_ALL_SRC ${GTEST_INCLUDE_DIRS}/gmock-gtest-all.cc)

include_directories("${GTEST_INCLUDE_DIRS}")

aux_source_directory(. TEST_FILES)
#set(TEST_FILES main.cpp)

add_executable(hamming_distance_tests ${TEST_FILES} ${GTEST_ALL_SRC})

#add_test(HammingDistanceTest hamming_distance_tests --gtest_filter=HammingDistanceTest*)
