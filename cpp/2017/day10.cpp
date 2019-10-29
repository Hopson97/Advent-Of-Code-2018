#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 10
    https://adventofcode.com/2017/day/10
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day10.txt";
} // namespace

namespace aoc2017 {
    void day10PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 10, 1, "None");
    }

    void day10PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 10, 2, "None");
    }
} // namespace aoc2017