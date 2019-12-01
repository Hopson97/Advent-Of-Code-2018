#include "aoc2019.h"

#include <aoc/file_io.h>

/*
    Solution for Advent of Code 2019 day 1
    https://adventofcode.com/2019/day/1
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day1.txt";

    int fuelNeeded(float mass) {
        return std::floor(mass / 3.0f) - 2.0f;
    }
} // namespace

namespace aoc2019 {
    void day1PartOne(bool doPrint)
    {
        auto masses = aoc::file_io::readAsLines(INPUT_PATH);
        int totalFuel = 0;
        for (auto mass : masses) {
            totalFuel += fuelNeeded(std::stof(mass));
        }
        aoc::output(doPrint, 2019, 1, 1, totalFuel);
    }

    void day1PartTwo(bool doPrint)
    {
        auto masses = aoc::file_io::readAsLines(INPUT_PATH);
        int totalFuel = 0;
        for (auto mass : masses) {
            int fuel = fuelNeeded(std::stof(mass));

            int total = fuel;
            int last = fuel;
            while (true)
            {
                int newF = fuelNeeded(last);
                if (newF > 0) {
                    last = newF;
                    total += newF;
                }
                else {
                    break;
                }
            }
            totalFuel += total;
        }
        aoc::output(doPrint, 2019, 1, 2, totalFuel);
    }
} // namespace aoc2019

