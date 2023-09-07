#include <iostream>

#include "random_generator.hpp"

namespace rg
{

int main (void)
{
    std::cout<<"Hello World!!"<<std::endl;

    std::cout<< "Output: "<< RandomGenerator::GetInstance().GenerateNumber(123)<<std::endl;

    return EXIT_SUCCESS;
}

}  // namespace rg