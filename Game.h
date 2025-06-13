#include "entity/Hero.h"
#include "entity/BadGuy.h"
#include "GameStates/BattleSystem.h"
#include "GameStates/Inn.h"
#include <vector>
#include <iostream>

enum class GameState { START, BATTLE, INN, GAME_OVER, EXIT };

class Game {
    GameState state;
    Hero* hero;
    std::vector<BadGuy> enemies;
    BattleSystem battleSystem;
    Inn inn;

public:
    Game();
    ~Game();
    void run();
private:
    void start();
    void battle();
    void visitInn();
    void gameOver();
};