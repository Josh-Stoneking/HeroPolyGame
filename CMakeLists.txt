cmake_minimum_required(VERSION 3.10)
project(heroGame)

set(CMAKE_CXX_STANDARD 14)

# Add the entity folder to the include path
include_directories(${PROJECT_SOURCE_DIR}/entity)

# List your source files
set(SOURCES
    main.cpp
    entity/Entity.cpp
    entity/Hero.cpp
    entity/BadGuy.cpp
    BattleSystem.cpp
    BetweenBattleShop.cpp
)

add_executable(heroGame ${SOURCES})