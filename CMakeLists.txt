# Top-level CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(CppAbstractionsProject)

# Add subdirectories for each chapter's exercises
add_subdirectory(exercises/ch1/p1)
# ...add more exercises as needed

# Optional: Set common settings (C++ standard, compiler flags)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic")

