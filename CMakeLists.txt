cmake_minimum_required(VERSION 2.8)
project(RedPandaWorkspace)

add_subdirectory(redpanda)
add_subdirectory(sandbox)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release")
  message(STATUS "Build type not specified: Use Release by default")
endif(NOT CMAKE_BUILD_TYPE)