cmake_minimum_required(VERSION 3.1)

set(PROJECT_NAME utils-cpp)

project(${PROJECT_NAME})

enable_testing()

set(INCLUDE_ROOT_DIR "${PROJECT_SOURCE_DIR}/include")

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(test)
