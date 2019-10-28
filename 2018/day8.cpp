#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 8
    https://adventofcode.com/2018/day/8
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day8.txt";
} // namespace

namespace aoc2018 {
    void day8PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 8, 1, "None");
    }

    void day8PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 8, 2, "None");
    }
} // namespace aoc2018