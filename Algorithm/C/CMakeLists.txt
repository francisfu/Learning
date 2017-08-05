cmake_minimum_required(VERSION 3.8)
project(algorithms)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_FLAGS "-std=c99")

set(SOURCE_FILES
        Sorting/QuickSort.c
#        primeRing.c
        README.md Sorting/Sorting.h Sorting/SortingMain.c)

add_executable(algorithms ${SOURCE_FILES})