#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 8
    https://adventofcode.com/2019/day/8
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day8.txt";
} // namespace

namespace aoc2019 {
    void day8PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 8, 1, "None");
    }

    void day8PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 8, 2, "None");
    }
} // namespace aoc2019