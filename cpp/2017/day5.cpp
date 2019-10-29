#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 5
    https://adventofcode.com/2017/day/5
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day5.txt";
} // namespace

namespace aoc2017 {
    void day5PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 5, 1, "None");
    }

    void day5PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 5, 2, "None");
    }
} // namespace aoc2017