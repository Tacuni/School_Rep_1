cmake_minimum_required(VERSION 3.27)
project(NadKlasy)

set(CMAKE_CXX_STANDARD 17)

add_executable(NadKlasy main.cpp
        Figure.cpp
        Figure.h
        Rectangle.cpp
        Rectangle.h
        Square.cpp
        Square.h
        Circle.cpp
        Circle.h
        EqTriangle.cpp
        EqTriangle.h
        Trapezium.cpp
        Trapezium.h)
