#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 8
    https://adventofcode.com/2017/day/8
*/

namespace {
    const char* INPUT_PATH = "2017/inputs/day8.txt";
} // namespace

namespace aoc2017 {
    void day8PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 8, 1, "None");
    }

    void day8PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 8, 2, "None");
    }
} // aoc2017