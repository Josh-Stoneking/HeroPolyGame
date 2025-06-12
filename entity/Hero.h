#ifndef HERO_H
#define HERO_H

#include "Entity.h"
#include <string>

class Hero : public Entity {
  private:
  int health = 100;
  std::string name = "";
  public:
    Hero();
    Hero(std::string aName);
    virtual ~Hero();

    std::string getName();
    int getHealth();
};

#endif