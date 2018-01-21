cmake_minimum_required(VERSION 3.9)
project(test1)

set(CMAKE_CXX_STANDARD 11)

add_executable(test1 main.cpp Dungeon.cpp Dungeon.h Monster.cpp Monster.h)