cmake_minimum_required(VERSION 4.4)


project(DeccerOne)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(lib/raylib)

add_executable(DeccerOneExe src/main.cpp)

target_link_libraries(DeccerOneExe PRIVATE raylib)
