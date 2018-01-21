//
// Created by joseph on 20/01/2018.
//

#ifndef TEST1_MONSTER_H
#define TEST1_MONSTER_H

class Monster {
private:
    int level;
    Monster * next;

public:
    Monster(char const *name, int level=0);

    virtual ~Monster();

    char *name;
};

typedef Monster * monPtr;

#endif //TEST1_MONSTER_H
