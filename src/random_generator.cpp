#include "random_generator.hpp"

namespace rg  // randomg generator namespace
{

RandomGenerator& RandomGenerator::GetInstance()
{
    static RandomGenerator instance;
    return instance;
}

std::string RandomGenerator::GenerateNumber(uint32_t seed)
{
    return "tests";
}

std::string RandomGenerator::GetLastNumberGenerated()
{

}

uint32_t RandomGenerator::GetLastSeedUsed()
{

}

}  // namespace rg