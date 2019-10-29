#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 20
    https://adventofcode.com/2017/day/20
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day20.txt";
} // namespace

namespace aoc2017 {
    void day20PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 20, 1, "None");
    }

    void day20PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 20, 2, "None");
    }
} // namespace aoc2017