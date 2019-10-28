#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 3
    https://adventofcode.com/2018/day/3
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day3.txt";
} // namespace

namespace aoc2018 {
    void day3PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 3, 1, "None");
    }

    void day3PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 3, 2, "None");
    }
} // namespace aoc2018