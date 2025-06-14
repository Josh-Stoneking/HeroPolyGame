cmake_minimum_required(VERSION 3.10)
project(heroPolyGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add include directories
include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/entity)
include_directories(${PROJECT_SOURCE_DIR}/GameStates)
include_directories(${PROJECT_SOURCE_DIR}/Weapons)

# Automatically find all .cpp files in the project and subdirectories
file(GLOB_RECURSE SOURCES
    "${PROJECT_SOURCE_DIR}/entity/*.cpp"
    "${PROJECT_SOURCE_DIR}/GameStates/*.cpp"
    "${PROJECT_SOURCE_DIR}/Weapons/*.cpp"
    "${PROJECT_SOURCE_DIR}/main.cpp"
    "${PROJECT_SOURCE_DIR}/Game.cpp"
)

add_executable(heroPolyGame ${SOURCES})