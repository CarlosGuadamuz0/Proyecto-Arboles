cmake_minimum_required(VERSION 3.23)
project(ProyectoI)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProyectoI main.cpp Node.cpp  HeapColaPrioritaria.cpp  Client.cpp  BST.cpp CargarTxt/Cargar.cpp toBinary.cpp toBinary.h)
