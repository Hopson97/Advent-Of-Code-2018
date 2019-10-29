#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 22
    https://adventofcode.com/2019/day/22
*/

namespace {
    const char* INPUT_PATH = "2019/inputs/day22.txt";
} // namespace

namespace aoc2019 {
    void day22PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 22, 1, "None");
    }

    void day22PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 22, 2, "None");
    }
} // aoc2019