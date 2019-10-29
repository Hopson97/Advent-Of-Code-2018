#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 23
    https://adventofcode.com/2015/day/23
*/

namespace {
    const char* INPUT_PATH = "2015/inputs/day23.txt";
} // namespace

namespace aoc2015 {
    void day23PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 23, 1, "None");
    }

    void day23PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 23, 2, "None");
    }
} // aoc2015