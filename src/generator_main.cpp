#include <iostream>

#include "random_generator.hpp"

int main (void)
{
    std::cout<<"Hello World!xxx"<<std::endl;
    std::cout<< "Output: "<< rg::RandomGenerator::GetInstance().GenerateNumber()<<std::endl;

    return EXIT_SUCCESS;
}
