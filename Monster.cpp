//
// Created by joseph on 20/01/2018.
//

#include <cstring>
#include "Monster.h"

Monster::Monster(char const *name, int level)
{
    this->level = level;

    this->name = new char[strlen(name+1)];
    strcpy(this->name, name);

}

Monster::~Monster()
{
    delete[] name;
    name = NULL;
}
