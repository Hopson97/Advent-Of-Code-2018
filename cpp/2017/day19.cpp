#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 19
    https://adventofcode.com/2017/day/19
*/

namespace {
    const char* INPUT_PATH = "2017/inputs/day19.txt";
} // namespace

namespace aoc2017 {
    void day19PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 19, 1, "None");
    }

    void day19PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 19, 2, "None");
    }
} // aoc2017