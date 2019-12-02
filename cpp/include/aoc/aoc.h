#pragma once

#include <iostream>

namespace aoc {
    template <typename Out>
    void output(bool output, int year, int day, int part, Out out)
    {
        if (output) {
            std::cout << "Result for " << year << " Day " << day << " Part" << part << std::endl;
            std::cout << out << '\n' << std::endl;
        }
    }

    template <typename Out>
    void output(bool output, int year, int day, int part, Out out, Out out2)
    {
        if (output) {
            std::cout << "Result for " << year << " Day " << day << " Part" << part << std::endl;
            std::cout << out << " " << out2 << '\n' << std::endl;
        }
    }
}