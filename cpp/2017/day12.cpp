#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 12
    https://adventofcode.com/2017/day/12
*/

namespace {
    const char* INPUT_PATH = "2017/inputs/day12.txt";
} // namespace

namespace aoc2017 {
    void day12PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 12, 1, "None");
    }

    void day12PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 12, 2, "None");
    }
} // aoc2017