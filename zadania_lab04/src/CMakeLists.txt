cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD  17)

include_directories(../lib/include ../include)
add_executable(homework_lab04 main.cpp Cuboid.cpp Ball.cpp QuadraticFunction.cpp Student.cpp)

target_link_libraries(homework_lab04 zadanie01_lib)