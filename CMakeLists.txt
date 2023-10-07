cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 17)

project(DndCharCreator)

set(SOURCES
    main.cpp
    character.cpp 
    races/dwarf.cpp   
)

add_executable(dndCreator ${SOURCES})