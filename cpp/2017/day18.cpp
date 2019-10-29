#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 18
    https://adventofcode.com/2017/day/18
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day18.txt";
} // namespace

namespace aoc2017 {
    void day18PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 18, 1, "None");
    }

    void day18PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 18, 2, "None");
    }
} // namespace aoc2017