#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 2
    https://adventofcode.com/2018/day/2
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day2.txt";
} // namespace

namespace aoc2018 {
    void day2PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 2, 1, "None");
    }

    void day2PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 2, 2, "None");
    }
} // namespace aoc2018