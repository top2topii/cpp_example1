//
// Created by joseph on 20/01/2018.
//

#include <iostream>
#include "Dungeon.h"

using namespace std;

Dungeon::Dungeon():total_count(0)
{}

int Dungeon::get_total_count() const
{
    return total_count;
}

void Dungeon::insert_monster(monPtr a_mon)
{
    // Monster List 추가
    if(total_count < MAX_MONSTER) {
        monster_list[total_count] = a_mon;
        total_count++;
    }
}

void Dungeon::show_all_monster()
{
    for(int i=0; i < total_count; i++) {
        cout << "(" << i+1 << ") " << monster_list[i]->name << endl;
    }
}

void Dungeon::delete_monster()
{

}
