#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 6
    https://adventofcode.com/2017/day/6
*/

namespace {
    const char* INPUT_PATH = "2017/inputs/day6.txt";
} // namespace

namespace aoc2017 {
    void day6PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 6, 1, "None");
    }

    void day6PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 6, 2, "None");
    }
} // aoc2017