#include "Hero.h"
#include <iostream>
#include <string>


Hero::Hero() {}
Hero::Hero(std::string aName) {name = aName;}
Hero::~Hero() {}

std::string Hero::getName() {
  return name;
}

int Hero::getHealth() {
  return health;
}