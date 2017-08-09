cmake_minimum_required(VERSION 3.0)

project(hello_world CXX)

add_executable(hello_world hello_world.cpp vector.cpp)

enable_testing()

add_test(hello hello_world)
