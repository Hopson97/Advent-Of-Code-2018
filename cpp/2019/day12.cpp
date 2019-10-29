#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 12
    https://adventofcode.com/2019/day/12
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day12.txt";
} // namespace

namespace aoc2019 {
    void day12PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 12, 1, "None");
    }

    void day12PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 12, 2, "None");
    }
} // namespace aoc2019