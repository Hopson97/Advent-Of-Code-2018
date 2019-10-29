#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 19
    https://adventofcode.com/2015/day/19
*/

namespace {
    const char* INPUT_PATH = "2015/inputs/day19.txt";
} // namespace

namespace aoc2015 {
    void day19PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 19, 1, "None");
    }

    void day19PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 19, 2, "None");
    }
} // aoc2015