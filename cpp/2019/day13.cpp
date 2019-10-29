#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 13
    https://adventofcode.com/2019/day/13
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day13.txt";
} // namespace

namespace aoc2019 {
    void day13PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 13, 1, "None");
    }

    void day13PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 13, 2, "None");
    }
} // namespace aoc2019