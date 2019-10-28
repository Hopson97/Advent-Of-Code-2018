#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 13
    https://adventofcode.com/2016/day/13
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day13.txt";
} // namespace

namespace aoc2016 {
    void day13PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 13, 1, "None");
    }

    void day13PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 13, 2, "None");
    }
} // namespace aoc2016