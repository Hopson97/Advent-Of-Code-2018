#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 7
    https://adventofcode.com/2015/day/7
*/

namespace {
    const char* INPUT_PATH = "2015/inputs/day7.txt";
} // namespace

namespace aoc2015 {
    void day7PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 7, 1, "None");
    }

    void day7PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 7, 2, "None");
    }
} // aoc2015