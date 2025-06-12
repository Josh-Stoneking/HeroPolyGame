#include "entity/Hero.h"
#include "entity/BadGuy.h"
#include "BattleSystem.h"
#include "Inn.h"
#include <vector>

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