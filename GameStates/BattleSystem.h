#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include "entity/Hero.h"
#include "entity/BadGuy.h"
#include <iostream>
#include <memory>
#include <vector>

class BattleSystem {
private:
// will incrememnt after each level completes
int currLevel = 1;
public:
BattleSystem();
~BattleSystem();

std::vector<std::unique_ptr<BadGuy>> generateEnemies();
void startBattle(Hero* hero);
};

#endif