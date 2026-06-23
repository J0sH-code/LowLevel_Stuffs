cmake_minimum_required(VERSION 4.2)
project(LowLevel_Stuffs C)

set(CMAKE_C_STANDARD 11)

add_executable(LowLevel_Stuffs
        Memory/app.c
        Memory/2dArray.c)
