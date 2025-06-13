#ifndef BADWARRIOR_H
#define BADWARRIOR_H

#include "BadGuy.h"

class BadWarrior : BadGuy {
  private:
  int health = 50;
  public:
  BadWarrior();
  virtual ~BadWarrior();
};

#endif BADWARRIOR_H
