#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity {
  protected:
  int health;
  public:
  Entity();
  virtual ~Entity();

  virtual int attack() = 0;
  virtual void block(int incomingAttack) = 0;
  virtual void takeDamage(int damageNum) = 0;
};

#endif
