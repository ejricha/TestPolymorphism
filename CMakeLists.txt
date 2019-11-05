# CMakeLists.txt
#
# Top-level file

# Need at least cmake 3.0
cmake_minimum_required(VERSION 3.0)

# Source some common files
include(${CMAKE_SOURCE_DIR}/cmake/Common.cmake)

# Set the project name
project(TestPolymorphism)

# Build the following subdirs
add_subdirectory(src)
