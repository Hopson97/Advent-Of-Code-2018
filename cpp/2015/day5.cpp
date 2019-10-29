#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 5
    https://adventofcode.com/2015/day/5
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day5.txt";
} // namespace

namespace aoc2015 {
    void day5PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 5, 1, "None");
    }

    void day5PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 5, 2, "None");
    }
} // namespace aoc2015