#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 16
    https://adventofcode.com/2018/day/16
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day16.txt";
} // namespace

namespace aoc2018 {
    void day16PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 16, 1, "None");
    }

    void day16PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 16, 2, "None");
    }
} // namespace aoc2018