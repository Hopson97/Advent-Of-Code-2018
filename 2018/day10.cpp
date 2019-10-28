#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 10
    https://adventofcode.com/2018/day/10
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day10.txt";
} // namespace

namespace aoc2018 {
    void day10PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 10, 1, "None");
    }

    void day10PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 10, 2, "None");
    }
} // namespace aoc2018