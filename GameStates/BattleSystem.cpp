#include "BattleSystem.h"

BattleSystem::BattleSystem() {}
BattleSystem::~BattleSystem() {}

void BattleSystem::startBattle(Hero* hero) {
  // idea for startBattle
  // will need to create enemies that the hero will fight
  // use a createEnemies method in battlesystem
  // need logic that will allow either the hero or badguy 
  //    to attack while taking turns
  // the hero will be able to choose from attacking, blocking, or using an item
  // the enemies turn will include attacking, blocking, not able to use item yet
  // once either the hero has died or the enemies are all dead
  //    provide gold to the hero, congradulate, and go back to game loop
  
  std::cout << "In battle" << std::endl;
  hero->takeDamage(20);
  std::cout << hero->getName() << "'s health: " << hero->getHealth() << std::endl;
}