#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 10
    https://adventofcode.com/2015/day/10
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day10.txt";
} // namespace

namespace aoc2015 {
    void day10PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 10, 1, "None");
    }

    void day10PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 10, 2, "None");
    }
} // namespace aoc2015