#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include "entity/Hero.h"
#include <iostream>

class BattleSystem {
public:
BattleSystem();
~BattleSystem();

void startBattle(Hero* hero);
};

#endif