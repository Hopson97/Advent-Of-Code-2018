#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 20
    https://adventofcode.com/2015/day/20
*/

namespace {
    const char* INPUT_PATH = "2015/inputs/day20.txt";
} // namespace

namespace aoc2015 {
    void day20PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 20, 1, "None");
    }

    void day20PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 20, 2, "None");
    }
} // aoc2015