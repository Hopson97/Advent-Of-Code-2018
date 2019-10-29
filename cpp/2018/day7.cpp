#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 7
    https://adventofcode.com/2018/day/7
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day7.txt";
} // namespace

namespace aoc2018 {
    void day7PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 7, 1, "None");
    }

    void day7PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 7, 2, "None");
    }
} // namespace aoc2018