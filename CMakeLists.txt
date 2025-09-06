cmake_minimum_required(VERSION 3.10)
project(LinkerDiffDemo)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Set output directories for all targets
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add subdirectories for each project
add_subdirectory(ProjectA)
add_subdirectory(ProjectB)
add_subdirectory(ProjectC)
add_subdirectory(ProjectD)
add_subdirectory(ProjectE)
