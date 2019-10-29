#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 24
    https://adventofcode.com/2018/day/24
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day24.txt";
} // namespace

namespace aoc2018 {
    void day24PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 24, 1, "None");
    }

    void day24PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 24, 2, "None");
    }
} // namespace aoc2018