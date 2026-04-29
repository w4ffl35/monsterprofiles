#include "Random.h"

Random::Random(u_int seed) :
    m_rng(std::mt19937_64(seed))
{}

int Random::random_range(int lo, int hi)
{
    std::uniform_int_distribution<int> d(lo, hi);
    return d(m_rng);
}

bool Random::random_bool(float density)
{
    std::bernoulli_distribution d(density);
    return d(m_rng);
}
