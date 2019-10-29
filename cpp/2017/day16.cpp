#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 16
    https://adventofcode.com/2017/day/16
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day16.txt";
} // namespace

namespace aoc2017 {
    void day16PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 16, 1, "None");
    }

    void day16PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 16, 2, "None");
    }
} // namespace aoc2017