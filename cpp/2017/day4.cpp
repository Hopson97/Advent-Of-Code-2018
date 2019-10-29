#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 4
    https://adventofcode.com/2017/day/4
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day4.txt";
} // namespace

namespace aoc2017 {
    void day4PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 4, 1, "None");
    }

    void day4PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 4, 2, "None");
    }
} // namespace aoc2017