# CMake
cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_STANDARD 23)

# Project properties
project(Revenant)

# ScriptHookV
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/external/ScriptHookV/include)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/external/ScriptHookV/lib)

# Define source directory
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")

# Add source files
message(STATUS "Revenant")
include_directories(src lib)
file(GLOB_RECURSE SRC_MAIN
        src/*.cpp
        lib/Memory/*.cpp
        lib/*.cpp)

# Build
add_library(Revenant SHARED "${SRC_MAIN}")
target_link_libraries(Revenant ScriptHookV)

# Force include common.hpp
target_precompile_headers(Revenant PRIVATE "${SRC_DIR}/revenant_pch.h")

# Set extension to .asi
set_target_properties(Revenant PROPERTIES SUFFIX ".asi")