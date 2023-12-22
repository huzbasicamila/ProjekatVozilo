cmake_minimum_required(VERSION 3.26)
project(ProjekatVozilo)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProjekatVozilo main.cpp
        Vozilo.cpp
        Vozilo.h
        Automobil.cpp
        Automobil.h
        Motor.cpp
        Motor.h
        Kontejner.cpp
        Kontejner.h)
