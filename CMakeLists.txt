cmake_minimum_required(VERSION 3.08)

project (LED LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#add_subdirectory(WS2812)
#list(APPEND EXTRA_LIBS WS2812)

#target_include_directories(LED PUBLIC "${PROJECT_BINARY_DIR}" )

include(ExternalProject)

ExternalProject_Add(
    GIT_REPOSITORY "https://github.com/jazzycamel/ws28128-rpi"
    GIT_TAG master
    )

add_executable(LED src/main.cpp src/utils.cpp)
