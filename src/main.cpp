#include "main.h"
#include <iostream>

int main()
{
    std::cout << "benchmarking fsm" << std::endl;
    benchmark(fsm_char_to_state);
    std::cout << std::endl;

    std::cout << "benchmarking switch case" << std::endl;
    benchmark(scase_char_to_state);
}