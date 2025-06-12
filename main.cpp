#include <iostream>
#include "entity/Hero.h"
#include "entity/BadGuy.h"
#include "BattleSystem.h"
#include "Inn.h"
#include "Game.h"

// organize a level some how
// the level will have a predetermined number and type of bad guy
// once all bad guys are eliminated, hero moves on
// two to three levels
// one start area and one final boss
// visit the Inn between levels (sleep, buy better weapon, armour, potion)

std::string askCharName() {
  std::string charName;
  std::cout << "What is your name?: ";
  std::getline(std::cin, charName);
  return charName;
}

Hero* createHero(std::string aName) {
  return new Hero(aName);
}

int main() {
    Game game;
    game.run();
    return 0;
}