#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 13
    https://adventofcode.com/2015/day/13
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day13.txt";
} // namespace

namespace aoc2015 {
    void day13PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 13, 1, "None");
    }

    void day13PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 13, 2, "None");
    }
} // namespace aoc2015