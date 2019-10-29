#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 22
    https://adventofcode.com/2015/day/22
*/

namespace {
    const char* INPUT_PATH = "2015/inputs/day22.txt";
} // namespace

namespace aoc2015 {
    void day22PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 22, 1, "None");
    }

    void day22PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 22, 2, "None");
    }
} // aoc2015