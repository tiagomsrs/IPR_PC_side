#include "random_generator.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

namespace rg  // randomg generator namespace
{

RandomGenerator::RandomGenerator()
{
    std::cout<<"Constructor"<<std::endl;
}

RandomGenerator::~RandomGenerator()
{
    std::cout<<"Destructor"<<std::endl;
}

RandomGenerator& RandomGenerator::GetInstance()
{
    static RandomGenerator instance;
    return instance;
}

std::string RandomGenerator::GenerateNumber()
{
    std::srand(std::time(nullptr));
    int random_variable = std::rand();
    std::cout << "Random value on [0, " << RAND_MAX << "]: " 
              << random_variable << '\n';

    last_number_generated = random_variable;

    return std::to_string(random_variable);
}

std::string RandomGenerator::GetLastNumberGenerated()
{

}

}  // namespace rg