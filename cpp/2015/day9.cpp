#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 9
    https://adventofcode.com/2015/day/9
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day9.txt";
} // namespace

namespace aoc2015 {
    void day9PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 9, 1, "None");
    }

    void day9PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 9, 2, "None");
    }
} // namespace aoc2015