#include "Game.h"
#include <iostream>

Game::Game() : state(GameState::START), hero(nullptr) {}

Game::~Game() { delete hero; }

void Game::run() {
    while (state != GameState::EXIT) {
        switch (state) {
            case GameState::START:
                start();
                break;
            case GameState::BATTLE:
                battle();
                break;
            case GameState::INN:
                visitInn();
                break;
            case GameState::GAME_OVER:
                gameOver();
                break;
            default:
                state = GameState::EXIT;
                break;
        }
    }
}

void Game::start() {
    // Ask for name, create hero, set up first level
    std::string name = askCharName();
    hero = new Hero(name);
    // ...set up enemies...
    state = GameState::BATTLE;
}

void Game::battle() {
    // Run battle logic
    battleSystem.startBattle(*hero, enemies);
    if (hero->isAlive()) {
        state = GameState::INN;
    } else {
        state = GameState::GAME_OVER;
    }
}

void Game::visitInn() {
    // Let hero rest, buy items, etc.
    inn.visit(*hero);
    // ...prepare next level or end game...
    state = GameState::BATTLE; // or EXIT if done
}

void Game::gameOver() {
    std::cout << "Game Over!\n";
    state = GameState::EXIT;
}