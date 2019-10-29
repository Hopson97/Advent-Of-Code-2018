#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 15
    https://adventofcode.com/2017/day/15
*/

namespace {
    const char* INPUT_PATH = "2017/inputs/day15.txt";
} // namespace

namespace aoc2017 {
    void day15PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 15, 1, "None");
    }

    void day15PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 15, 2, "None");
    }
} // aoc2017