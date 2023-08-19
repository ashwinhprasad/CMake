cmake_minimum_required(VERSION 3.22.1)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED)
project(simple_example)

add_library(lib1 STATIC lib1/sampleLib.cpp)
target_include_directories(lib1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib1/include)

add_executable(simple_example main.cpp)
target_include_directories(simple_example PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(simple_example PUBLIC lib1)