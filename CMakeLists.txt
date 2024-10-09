cmake_minimum_required(VERSION 3.29)
project(projeekt)

set(CMAKE_CXX_STANDARD 20)

add_executable(projeekt main.cpp
        Animal.cpp
        Animal.h
        Dog.cpp
        Dog.h
        Cat.cpp
        Cat.h)
