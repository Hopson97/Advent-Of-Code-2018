#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 21
    https://adventofcode.com/2018/day/21
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day21.txt";
} // namespace

namespace aoc2018 {
    void day21PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 21, 1, "None");
    }

    void day21PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 21, 2, "None");
    }
} // namespace aoc2018