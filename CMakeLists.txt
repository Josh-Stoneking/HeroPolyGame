cmake_minimum_required(VERSION 3.10)
project(heroPolyGame)

set(CMAKE_CXX_STANDARD 14)

# Add the entity and GameStates folders to the include path
include_directories(${PROJECT_SOURCE_DIR}/entity)
include_directories(${PROJECT_SOURCE_DIR}/GameStates)

# List your source files
set(SOURCES
    main.cpp
    Game.cpp
    entity/Entity.cpp
    entity/Hero.cpp
    entity/BadGuy.cpp
    entity/BadWarrior.cpp
    GameStates/BattleSystem.cpp
    GameStates/Inn.cpp
)

add_executable(heroPolyGame ${SOURCES})