cmake_minimum_required(VERSION 3.8)
project(Isotopes)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Element.cpp
        Element.h
        Isotope.cpp
        Isotope.h
        main.cpp)

add_executable(Isotopes ${SOURCE_FILES})