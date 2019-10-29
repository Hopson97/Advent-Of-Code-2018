#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 24
    https://adventofcode.com/2017/day/24
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day24.txt";
} // namespace

namespace aoc2017 {
    void day24PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 24, 1, "None");
    }

    void day24PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 24, 2, "None");
    }
} // namespace aoc2017