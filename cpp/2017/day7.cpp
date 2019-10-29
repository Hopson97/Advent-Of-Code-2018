#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 7
    https://adventofcode.com/2017/day/7
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day7.txt";
} // namespace

namespace aoc2017 {
    void day7PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 7, 1, "None");
    }

    void day7PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 7, 2, "None");
    }
} // namespace aoc2017