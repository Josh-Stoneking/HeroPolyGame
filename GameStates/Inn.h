#ifndef INN_H
#define INN_H

#include <iostream>
#include "Entity/Hero.h"

class Inn {
public:
Inn();
~Inn();

void visit(Hero* hero);
};

#endif