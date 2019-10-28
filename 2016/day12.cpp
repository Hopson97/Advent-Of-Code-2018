#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 12
    https://adventofcode.com/2016/day/12
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day12.txt";
} // namespace

namespace aoc2016 {
    void day12PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 12, 1, "None");
    }

    void day12PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 12, 2, "None");
    }
} // namespace aoc2016