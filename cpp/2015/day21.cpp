#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 21
    https://adventofcode.com/2015/day/21
*/

namespace {
    const char* INPUT_PATH = "2015/inputs/day21.txt";
} // namespace

namespace aoc2015 {
    void day21PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 21, 1, "None");
    }

    void day21PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 21, 2, "None");
    }
} // aoc2015