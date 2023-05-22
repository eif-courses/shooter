cmake_minimum_required(VERSION 3.25)
project(shooter)

set(CMAKE_CXX_STANDARD 14)

add_executable(shooter main.cpp Game.cpp Game.h Player.cpp Player.h Weapon.cpp Weapon.h)
