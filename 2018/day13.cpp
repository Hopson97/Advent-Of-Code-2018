#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 13
    https://adventofcode.com/2018/day/13
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day13.txt";
} // namespace

namespace aoc2018 {
    void day13PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 13, 1, "None");
    }

    void day13PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 13, 2, "None");
    }
} // namespace aoc2018