cmake_minimum_required(VERSION 3.18)

project(pikiwidb-boost
        DESCRIPTION "Part of Boost library which pikiwidb depends on"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(pikiwidb-boost INTERFACE)
target_include_directories(pikiwidb-boost INTERFACE .)
