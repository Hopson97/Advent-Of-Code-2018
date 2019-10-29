#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 22
    https://adventofcode.com/2017/day/22
*/

namespace {
    const char* INPUT_PATH = "2017/inputs/day22.txt";
} // namespace

namespace aoc2017 {
    void day22PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 22, 1, "None");
    }

    void day22PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 22, 2, "None");
    }
} // aoc2017