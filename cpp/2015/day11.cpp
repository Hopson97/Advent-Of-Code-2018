#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 11
    https://adventofcode.com/2015/day/11
*/

namespace {
    const char* INPUT_PATH = "2015/inputs/day11.txt";
} // namespace

namespace aoc2015 {
    void day11PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 11, 1, "None");
    }

    void day11PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 11, 2, "None");
    }
} // aoc2015