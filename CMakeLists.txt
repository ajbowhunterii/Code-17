cmake_minimum_required(VERSION 3.12)
project(SFML_Template)

set(CMAKE_CXX_STANDARD 14)

include_directories("D:/CSCI 261/mingw64/mingw64/include")
include_directories("D:/CSCI 261/mingw64/x86_64-w64-mingw32/include")

add_executable(SFML_Template main.cpp Game.cpp Game.h)

target_link_directories(SFML_Template PUBLIC "D:/CSCI 261/mingw64/mingw64/lib")
target_link_directories(SFML_Template PUBLIC "D:/CSCI 261/mingw64/mingw64/x86_64-w64-mingw32/lib")

target_link_libraries(SFML_Template sfml-graphics sfml-system sfml-window sfml-main)
