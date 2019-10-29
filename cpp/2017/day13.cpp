#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 13
    https://adventofcode.com/2017/day/13
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day13.txt";
} // namespace

namespace aoc2017 {
    void day13PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 13, 1, "None");
    }

    void day13PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 13, 2, "None");
    }
} // namespace aoc2017