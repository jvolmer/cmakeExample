cmake_minimum_required(VERSION 3.13)
project(ExampleProject
  VERSION 1.0
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

# include src file for tests
include_directories(src)

add_subdirectory(src)
add_subdirectory(test)

