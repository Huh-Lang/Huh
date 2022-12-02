cmake_minimum_required(VERSION 3.24)
project(Huh C)
set(CMAKE_C_STANDARD 17)
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

find_package(glog)
find_package(fmt)

add_executable(Huh src/main.c)

# Use the global target
target_link_libraries(${PROJECT_NAME} glog::glog)