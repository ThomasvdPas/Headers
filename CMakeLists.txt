cmake_minimum_required(VERSION 3.9)
project(Nucleo)

set(CMAKE_CXX_STANDARD 11)

add_executable(Nucleo
        add.cpp
        add.h
        main.cpp
        test.cpp
        test.h
        Time.cpp
        Time.h)
