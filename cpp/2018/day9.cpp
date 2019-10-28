#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 9
    https://adventofcode.com/2018/day/9
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day9.txt";
} // namespace

namespace aoc2018 {
    void day9PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 9, 1, "None");
    }

    void day9PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 9, 2, "None");
    }
} // namespace aoc2018