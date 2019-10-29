#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 11
    https://adventofcode.com/2017/day/11
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day11.txt";
} // namespace

namespace aoc2017 {
    void day11PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 11, 1, "None");
    }

    void day11PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 11, 2, "None");
    }
} // namespace aoc2017