#include "Monster.h"

Monster::Monster(Random random) :
    m_random(random),
    m_portrait_generator(PortraitGenerator(random))
{
    generate();
}

void Monster::generate() {
    m_portrait_generator.generate();
    m_stats.level = 1;
    m_stats.max_hp = randomStat();
    m_stats.max_mp = randomStat();
    m_stats.hp = m_stats.max_hp;
    m_stats.mp = m_stats.max_mp;
    m_stats.attack = randomStat();
    m_stats.defense = randomStat();
    m_stats.agility = randomStat();
}

std::bitset<64> Monster::portrait()
{
    return m_portrait_generator.grid();
}

MonsterStats Monster::stats()
{
    return m_stats;
}

int Monster::randomStat()
{
    int lo = 5;
    int hi = 10;
    return m_random.random_range(lo, hi);
}