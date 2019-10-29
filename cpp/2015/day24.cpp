#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 24
    https://adventofcode.com/2015/day/24
*/

namespace {
    const char* INPUT_PATH = "2015/inputs/day24.txt";
} // namespace

namespace aoc2015 {
    void day24PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 24, 1, "None");
    }

    void day24PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 24, 2, "None");
    }
} // aoc2015