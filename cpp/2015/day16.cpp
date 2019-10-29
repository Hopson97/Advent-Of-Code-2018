#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 16
    https://adventofcode.com/2015/day/16
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day16.txt";
} // namespace

namespace aoc2015 {
    void day16PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 16, 1, "None");
    }

    void day16PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 16, 2, "None");
    }
} // namespace aoc2015