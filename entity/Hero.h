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

    bool isAlive();
    static std::string askCharName();
    std::string getName();
    int getHealth();
};

#endif