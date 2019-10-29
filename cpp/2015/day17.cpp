#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 17
    https://adventofcode.com/2015/day/17
*/

namespace {
    const char* INPUT_PATH = "2015/inputs/day17.txt";
} // namespace

namespace aoc2015 {
    void day17PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 17, 1, "None");
    }

    void day17PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 17, 2, "None");
    }
} // aoc2015