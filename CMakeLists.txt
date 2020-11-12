cmake_minimum_required(VERSION 3.17)
project(casinov2 C)

set(CMAKE_C_STANDARD 99)

add_executable(casinov2 main.c roleta/roleta.c roleta/roleta.h menu/menu.c menu/menu.h jogador/jogador.c jogador/jogador.h)