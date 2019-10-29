#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 14
    https://adventofcode.com/2015/day/14
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day14.txt";
} // namespace

namespace aoc2015 {
    void day14PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 14, 1, "None");
    }

    void day14PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 14, 2, "None");
    }
} // namespace aoc2015