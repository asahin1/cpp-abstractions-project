# Top-level CMakeLists.txt
cmake_minimum_required(VERSION 3.17)
project(CppAbstractionsProject VERSION 1.0)

# Optional: Set common settings (C++ standard, compiler flags)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")

# set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic")

# Include subdirectories under "include"
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add sources for shared classes and utilities
set(SHARED_SOURCES
    src/Domino/domino.cpp
)

# Define a library target for shared code
add_library(project_shared ${SHARED_SOURCES})

# Add subdirectories for each chapter's exercises
add_subdirectory(exercises/ch1/p1)
add_subdirectory(exercises/ch6/p1)

# ...add more exercises as needed
