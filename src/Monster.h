#pragma once
#include "PortraitGenerator.h"

struct MonsterStats
{
    int level;
    int xp;
    int max_hp;
    int max_mp;
    int hp;
    int mp;
    int attack;
    int defense;
    int agility;
};

class Monster
{
public:
    explicit Monster(Random random);
    std::bitset<64> portrait();
    MonsterStats stats();

private:
    Random m_random;
    PortraitGenerator m_portrait_generator;
    MonsterStats m_stats{};
    void generate();
    int randomStat();
};
