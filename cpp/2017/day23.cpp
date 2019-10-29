#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 23
    https://adventofcode.com/2017/day/23
*/

namespace {
    const char* INPUT_PATH = "2017/inputs/day23.txt";
} // namespace

namespace aoc2017 {
    void day23PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 23, 1, "None");
    }

    void day23PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 23, 2, "None");
    }
} // aoc2017