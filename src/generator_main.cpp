#include <iostream>

#include "random_generator.hpp"

int main (void)
{
    std::cout<<"Hello World!zz"<<std::endl;
    std::cout<< "output: "<< rg::RandomGenerator::GetInstance().GenerateNumber()<<std::endl;

    return EXIT_SUCCESS;
}
