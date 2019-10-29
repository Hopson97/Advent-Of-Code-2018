#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 15
    https://adventofcode.com/2015/day/15
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day15.txt";
} // namespace

namespace aoc2015 {
    void day15PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 15, 1, "None");
    }

    void day15PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 15, 2, "None");
    }
} // namespace aoc2015