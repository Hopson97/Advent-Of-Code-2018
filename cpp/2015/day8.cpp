#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 8
    https://adventofcode.com/2015/day/8
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day8.txt";
} // namespace

namespace aoc2015 {
    void day8PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 8, 1, "None");
    }

    void day8PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 8, 2, "None");
    }
} // namespace aoc2015