#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include "entity/Hero.h"

class BattleSystem {
public:
BattleSystem();
~BattleSystem();

void startBattle(Hero* hero);
};

#endif