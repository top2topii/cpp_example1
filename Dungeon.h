//
// Created by joseph on 20/01/2018.
//

#ifndef TEST1_DUNGEON_H
#define TEST1_DUNGEON_H

#include "Monster.h"

const int MAX_MONSTER = 100;

class Dungeon {

private:
    int total_count;        // Monster 마릿수
    monPtr monster_list[MAX_MONSTER];   // Monster Pointer Array

public:

    Dungeon();

    int get_total_count() const;

    void insert_monster(monPtr a_mon);
    void delete_monster();

    void show_all_monster();
};


#endif //TEST1_DUNGEON_H
