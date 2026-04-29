#include "PortraitGenerator.h"
#include <iostream>

PortraitGenerator::PortraitGenerator(
    Random random,
    float density
) : m_random(random),
    m_density(density)
{}

void PortraitGenerator::generate()
{
    for (auto y = 0; y < GRID_SIZE; ++y)
    {
        auto next_x = GRID_SIZE - 1;
        for (auto x = 0; x < GRID_SIZE / 2; ++x)
        {
            auto index = x + GRID_SIZE * y;
            auto index_2 = next_x + GRID_SIZE * y;
            m_grid[index] = m_random.random_bool(m_density);
            m_grid[index_2] = m_grid[index];
            --next_x;
        }
    }
}

std::bitset<64> &PortraitGenerator::grid() {
    return m_grid;
}
