#include <iostream>
#include "BattleSystem.h"

BattleSystem::BattleSystem() {}
BattleSystem::~BattleSystem() {}

void BattleSystem::startBattle(Hero* hero) {
  std::cout << "In battle" << std::endl;
  hero->takeDamage(20);
  std::cout << hero->getName() << "'s health: " << hero->getHealth() << std::endl;
}