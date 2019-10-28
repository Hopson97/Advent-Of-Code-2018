#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 5
    https://adventofcode.com/2018/day/5
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day5.txt";
} // namespace

namespace aoc2018 {
    void day5PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 5, 1, "None");
    }

    void day5PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 5, 2, "None");
    }
} // namespace aoc2018