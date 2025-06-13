#ifndef INN_H
#define INN_H

#include "entity/Hero.h"
#include <iostream>

class Inn {
public:
Inn();
~Inn();

void visit(Hero* hero);
};

#endif