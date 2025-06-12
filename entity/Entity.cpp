#include "Entity.h"
#include <iostream>

Entity::Entity() {}

Entity::~Entity() {}

void Entity::test() const {
  std::cout << "Entity test" << std::endl;
}