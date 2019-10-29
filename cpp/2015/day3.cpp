#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 3
    https://adventofcode.com/2015/day/3
*/

namespace {
    const char* INPUT_PATH = "2015/inputs/day3.txt";
} // namespace

namespace aoc2015 {
    void day3PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 3, 1, "None");
    }

    void day3PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 3, 2, "None");
    }
} // aoc2015