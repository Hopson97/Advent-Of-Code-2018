#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 17
    https://adventofcode.com/2017/day/17
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day17.txt";
} // namespace

namespace aoc2017 {
    void day17PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 17, 1, "None");
    }

    void day17PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 17, 2, "None");
    }
} // namespace aoc2017