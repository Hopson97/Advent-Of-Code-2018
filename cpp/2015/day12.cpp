#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 12
    https://adventofcode.com/2015/day/12
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day12.txt";
} // namespace

namespace aoc2015 {
    void day12PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 12, 1, "None");
    }

    void day12PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 12, 2, "None");
    }
} // namespace aoc2015