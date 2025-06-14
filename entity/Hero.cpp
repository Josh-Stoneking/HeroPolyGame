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

int Hero::attack() {
std::cout << this->name << " attacking!" << std::endl;
return 0;
}

void Hero::block(int incomingAttack) {
std::cout << this->name << " blocking!" << std::endl;
}

void Hero::takeDamage(int damageNum) {
  this->health -= damageNum;
}