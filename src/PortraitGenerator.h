#pragma once
#include <bitset>
#include "Random.h"

const int GRID_SIZE = 8;

class PortraitGenerator
{
public:
    explicit PortraitGenerator(Random random, float density = 0.7);
    void generate();
    std::bitset<64>& grid();

private:
    std::bitset<64> m_grid;
    Random m_random;
    float m_density;
};
