#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 1
    https://adventofcode.com/2019/day/1
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day1.txt";
} // namespace

namespace aoc2019 {
    void day1PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 1, 1, "None");
    }

    void day1PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 1, 2, "None");
    }
} // namespace aoc2019