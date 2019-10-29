#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 14
    https://adventofcode.com/2017/day/14
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day14.txt";
} // namespace

namespace aoc2017 {
    void day14PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 14, 1, "None");
    }

    void day14PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 14, 2, "None");
    }
} // namespace aoc2017