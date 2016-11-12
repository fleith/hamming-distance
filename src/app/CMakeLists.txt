

### Checking Boost C++ library
find_package(Boost 1.54 REQUIRED program_options)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif(Boost_FOUND)

include_directories(../lib)

set(SOURCE_FILES main.cpp)

add_executable(hdc ${SOURCE_FILES})
target_link_libraries(hdc ${Boost_LIBRARIES} hamming_distance)