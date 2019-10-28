#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 15
    https://adventofcode.com/2016/day/15
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day15.txt";
} // namespace

namespace aoc2016 {
    void day15PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 15, 1, "None");
    }

    void day15PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 15, 2, "None");
    }
} // namespace aoc2016