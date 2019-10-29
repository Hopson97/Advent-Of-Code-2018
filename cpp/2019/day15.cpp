#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 15
    https://adventofcode.com/2019/day/15
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day15.txt";
} // namespace

namespace aoc2019 {
    void day15PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 15, 1, "None");
    }

    void day15PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 15, 2, "None");
    }
} // namespace aoc2019