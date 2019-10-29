#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 2
    https://adventofcode.com/2015/day/2
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day2.txt";
} // namespace

namespace aoc2015 {
    void day2PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 2, 1, "None");
    }

    void day2PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 2, 2, "None");
    }
} // namespace aoc2015