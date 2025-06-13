#include "Game.h"

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
    std::string name = Hero::askCharName();
    if (hero) delete hero;
    hero = new Hero(name);
    state = GameState::BATTLE;
}

void Game::battle() {
    battleSystem.startBattle(hero);
    if (hero->isAlive()) {
        state = GameState::INN;
    } else {
        state = GameState::GAME_OVER;
    }
}

void Game::visitInn() {
    inn.visit(hero);
    state = GameState::BATTLE;
}

void Game::gameOver() {
    std::cout << "Game Over!\n";
    state = GameState::EXIT;
}