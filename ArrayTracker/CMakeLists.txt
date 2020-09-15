cmake_minimum_required(VERSION 3.5)

project(ArrayTracker LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ArrayTracker main.cpp arrayTracker.cpp arrayTracker.h sortSolution.cpp sortSolution.h sortTester.cpp sortTester.h)
