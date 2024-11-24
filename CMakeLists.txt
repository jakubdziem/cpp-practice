cmake_minimum_required(VERSION 3.29)
project(Dziem_Jakub_5_3_Lab2_Zad3)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp-practice main.cpp
        Array.cpp
        Array.h
        Person.cpp
        Person.h
        Contact.cpp
        Contact.h
        Ksiazka.cpp
        Ksiazka.h)
set(BOOST_ROOT "..\\boost_1_86_0")
find_package(Boost 1.83.0)
if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
endif()
message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
message(STATUS "Boost_VERSION: ${Boost_VERSION}")
include_directories(${Boost_INCLUDE_DIR})