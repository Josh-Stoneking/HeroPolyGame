#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include "Entity/Hero.h"

class BattleSystem {
public:
BattleSystem();
~BattleSystem();

void startBattle(Hero* hero);
};

#endif