#include "Hero.h"
#include <iostream>
#include <string>


Hero::Hero() {}
Hero::Hero(std::string aName) {name = aName;}
Hero::~Hero() {}

Hero* Hero::createHero(std::string aName) {
  return new Hero(aName);
}

bool Hero::isAlive() {
  return (this->health > 0);
}

std::string Hero::askCharName() {
  std::string charName;
  std::cout << "Enter player name: ";
  std::getline(std::cin, charName);
  return charName;
}

std::string Hero::getName() {
  return name;
}

int Hero::getHealth() {
  return health;
}

void Hero::takeDamage(int damageNum) {
  this->health -= damageNum;
}