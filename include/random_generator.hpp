#ifndef RANDOM_GENERATOR_H_
#define RANDOM_GENERATOR_H_

#include <cstdint>
#include <string>

namespace rg  // randomg generator namespace
{

class RandomGenerator final
{
  public:
    static RandomGenerator& GetInstance();

    std::string GenerateNumber(uint32_t seed);
    std::string GetLastNumberGenerated();
    uint32_t GetLastSeedUsed();

  private:
    std::string last_number_generated;
    uint32_t last_seed_used;

    RandomGenerator();
    ~RandomGenerator();

    // Disable copy and move
    RandomGenerator(const RandomGenerator &) = delete;
    RandomGenerator &operator=(const RandomGenerator &) = delete;
    RandomGenerator(RandomGenerator &&) = delete;
    RandomGenerator &operator=(RandomGenerator &&) = delete;
};

}  // namespace rg

#endif // RANDOM_GENERATOR_H_