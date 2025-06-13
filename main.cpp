#include <iostream>
#include "entity/Hero.h"
#include "entity/BadGuy.h"
#include "GameStates/BattleSystem.h"
#include "GameStates/Inn.h"
#include "Game.h"

// organize a level some how
// the level will have a predetermined number and type of bad guy
// once all bad guys are eliminated, hero moves on
// two to three levels
// one start area and one final boss
// visit the Inn between levels (sleep, buy better weapon, armour, potion)

int main() {
    Game game;
    game.run();
    return 0;
}