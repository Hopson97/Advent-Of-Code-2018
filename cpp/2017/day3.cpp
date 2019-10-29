#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 3
    https://adventofcode.com/2017/day/3
*/

namespace {
    const char* INPUT_PATH = "2017/inputs/day3.txt";
} // namespace

namespace aoc2017 {
    void day3PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 3, 1, "None");
    }

    void day3PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 3, 2, "None");
    }
} // aoc2017