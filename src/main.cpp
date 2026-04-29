#include <iostream>
#include "Monster.h"

int main() {
    u_int seed = 42;
    auto random = Random(seed);
    auto monster = Monster(random);
    auto portrait = monster.portrait();
    auto stats = monster.stats();
    for (auto y = 0; y < GRID_SIZE; ++y)
    {
        for (auto x = 0; x < GRID_SIZE; ++x)
        {
            auto index = x + GRID_SIZE * y;

            if (portrait[index] != 0)
            {
                std::cout << "▉";
            }
            else
            {
                std::cout << "▒";
            }
        }
        std::cout << std::endl;
    }

    std::cout << "Stats" << std::endl;
    std::cout << "LEVEL: " << stats.level << std::endl;
    std::cout << "XP: " << stats.xp << std::endl;
    std::cout << "HP: " << stats.max_hp << "/" << stats.hp << std::endl;
    std::cout << "MP: " << stats.max_mp << "/" << stats.mp << std::endl;
    std::cout << "ATTACK: " << stats.attack << std::endl;
    std::cout << "DEFENSE: " << stats.defense << std::endl;
    std::cout << "AGILITY: " << stats.agility << std::endl;

    return 0;
}
