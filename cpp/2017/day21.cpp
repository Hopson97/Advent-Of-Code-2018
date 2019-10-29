#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 21
    https://adventofcode.com/2017/day/21
*/

namespace {
    const char* INPUT_PATH = "2017/inputs/day21.txt";
} // namespace

namespace aoc2017 {
    void day21PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 21, 1, "None");
    }

    void day21PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 21, 2, "None");
    }
} // aoc2017