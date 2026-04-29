#pragma once
#include <random>


class Random
{
public:
    Random(u_int seed);
    int random_range(int lo, int hi);
    bool random_bool(float density = 0.7);
private:
    std::mt19937_64 m_rng;
};
