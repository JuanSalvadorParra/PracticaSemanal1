cmake_minimum_required(VERSION 4.1)
project(PracticaSemanal1)

set(CMAKE_CXX_STANDARD 20)

add_executable(PracticaSemanal1 Practica/PracticaSemanal1/main.cpp
        Practica/PracticaSemanal1/Animal.cpp
        Practica/PracticaSemanal1/Animal.h
        Practica/PracticaSemanal1/Mamifero.h
        Practica/PracticaSemanal1/Mamifero.cpp
        Practica/PracticaSemanal1/Perro.cpp
        Practica/PracticaSemanal1/Perro.h)
