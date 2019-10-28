#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 6
    https://adventofcode.com/2018/day/6
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day6.txt";
} // namespace

namespace aoc2018 {
    void day6PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 6, 1, "None");
    }

    void day6PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 6, 2, "None");
    }
} // namespace aoc2018