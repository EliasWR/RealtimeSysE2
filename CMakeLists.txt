cmake_minimum_required(VERSION 3.21)
project(RealtimeSysE2)

set(CMAKE_CXX_STANDARD 20)
#enable_testing()

# Packages
find_package (fmt CONFIG REQUIRED)
find_package (OpenCV CONFIG REQUIRED)

# Directories
# add_subdirectory(tests)
add_subdirectory(application)