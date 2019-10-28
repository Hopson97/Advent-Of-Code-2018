#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 15
    https://adventofcode.com/2018/day/15
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day15.txt";
} // namespace

namespace aoc2018 {
    void day15PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 15, 1, "None");
    }

    void day15PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 15, 2, "None");
    }
} // namespace aoc2018