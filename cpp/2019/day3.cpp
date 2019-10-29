#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 3
    https://adventofcode.com/2019/day/3
*/

namespace {
    const char* INPUT_PATH = "2019/inputs/day3.txt";
} // namespace

namespace aoc2019 {
    void day3PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 3, 1, "None");
    }

    void day3PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 3, 2, "None");
    }
} // aoc2019