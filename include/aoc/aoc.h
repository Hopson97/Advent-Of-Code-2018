#pragma once

#include <iostream>

template <typename Out>
void output(bool output, int year, int day, int part, Out out)
{
    if (output) {
        std::cout << "Result for " << year << " Day " << day << " Part" << part << std::endl;
        std::cout << out << '\n' << std::endl;
    }
}
