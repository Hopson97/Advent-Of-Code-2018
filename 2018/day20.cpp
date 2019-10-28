#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 20
    https://adventofcode.com/2018/day/20
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day20.txt";
} // namespace

namespace aoc2018 {
    void day20PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 20, 1, "None");
    }

    void day20PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 20, 2, "None");
    }
} // namespace aoc2018