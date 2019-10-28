#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 14
    https://adventofcode.com/2018/day/14
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day14.txt";
} // namespace

namespace aoc2018 {
    void day14PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 14, 1, "None");
    }

    void day14PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 14, 2, "None");
    }
} // namespace aoc2018