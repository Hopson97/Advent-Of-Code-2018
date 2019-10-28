#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 16
    https://adventofcode.com/2016/day/16
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day16.txt";
} // namespace

namespace aoc2016 {
    void day16PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 16, 1, "None");
    }

    void day16PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 16, 2, "None");
    }
} // namespace aoc2016