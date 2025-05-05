cmake_minimum_required(VERSION 3.28)
project(CivGrid)

set(CMAKE_CXX_STANDARD 23)

#include directories
include_directories(/home/meowmeowmachine/libosmium/include)

#Add the executable 

add_executable(CivGrid 

/home/meowmeowmachine/CivGridMap/source/DataExtraction/DataExtraction.cpp

main.cpp)

target_link_libraries(CivGrid
    bz2
    z
    expat
)
