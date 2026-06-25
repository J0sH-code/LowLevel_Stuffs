cmake_minimum_required(VERSION 4.2)
project(LowLevel_Stuffs C)

set(CMAKE_C_STANDARD 11)

add_executable(LowLevel_Stuffs Memory/app.c)
add_executable(LowLevel_Stuffs Memory/2dArray.c)
add_executable(LowLevel_Stuffs Memory/browse.c)

