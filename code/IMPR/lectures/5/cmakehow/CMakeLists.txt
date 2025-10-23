cmake_minimum_required(VERSION 3.10)

project(CircleProject C)

set(CMAKE_C_STANDARD 11)

add_library(circle src/circle.c)
target_link_libraries(circle m)

add_executable(main src/main.c)
target_link_libraries(main circle)
