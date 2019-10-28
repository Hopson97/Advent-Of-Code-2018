#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 14
    https://adventofcode.com/2016/day/14
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day14.txt";
} // namespace

namespace aoc2016 {
    void day14PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 14, 1, "None");
    }

    void day14PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 14, 2, "None");
    }
} // namespace aoc2016