cmake_minimum_required(VERSION 3.5)

project(nonQtConsoleApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(nonQtConsoleApp main.cpp)

install(TARGETS nonQtConsoleApp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
