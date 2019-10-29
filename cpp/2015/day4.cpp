#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 4
    https://adventofcode.com/2015/day/4
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day4.txt";
} // namespace

namespace aoc2015 {
    void day4PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 4, 1, "None");
    }

    void day4PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 4, 2, "None");
    }
} // namespace aoc2015