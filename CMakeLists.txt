cmake_minimum_required(VERSION 3.08)

project (LED LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LED src/main.cpp)

