#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 9
    https://adventofcode.com/2017/day/9
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day9.txt";
} // namespace

namespace aoc2017 {
    void day9PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 9, 1, "None");
    }

    void day9PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 9, 2, "None");
    }
} // namespace aoc2017