#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 12
    https://adventofcode.com/2018/day/12
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day12.txt";
} // namespace

namespace aoc2018 {
    void day12PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 12, 1, "None");
    }

    void day12PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 12, 2, "None");
    }
} // namespace aoc2018