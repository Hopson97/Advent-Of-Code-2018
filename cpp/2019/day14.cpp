#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 14
    https://adventofcode.com/2019/day/14
*/

namespace {
    const char* INPUT_PATH = "2019/inputs/day14.txt";
} // namespace

namespace aoc2019 {
    void day14PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 14, 1, "None");
    }

    void day14PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 14, 2, "None");
    }
} // aoc2019