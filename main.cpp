#include <iostream>
#include "Dungeon.h"

using namespace std;

int main() {

    Dungeon my_dungeon;

    auto t_mon = new Monster("t-mon");
    auto t_rex = new Monster("t-rex");

    my_dungeon.insert_monster(t_mon);
    my_dungeon.insert_monster(t_rex);

    cout << "My Dungeon's count of monsters: " << my_dungeon.get_total_count() << endl;

    my_dungeon.show_all_monster();


    return 0;
}