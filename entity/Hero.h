#ifndef HERO_H
#define HERO_H

#include "Entity.h"

class Hero : public Entity {
  private:
  int health = 100;
  std::string name = "";
  public:
    Hero();
    Hero(std::string aName);
    virtual ~Hero();

    static Hero* createHero(std::string aName);
    bool isAlive();
    static std::string askCharName();
    std::string getName();
    int getHealth();

    int attack() override;
    void block(int incomingAttack) override;
    void takeDamage(int damageNum) override;
};

#endif