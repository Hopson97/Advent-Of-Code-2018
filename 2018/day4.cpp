#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 4
    https://adventofcode.com/2018/day/4
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day4.txt";
} // namespace

namespace aoc2018 {
    void day4PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 4, 1, "None");
    }

    void day4PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 4, 2, "None");
    }
} // namespace aoc2018