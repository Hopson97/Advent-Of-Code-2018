#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 4
    https://adventofcode.com/2016/day/4
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day4.txt";
} // namespace

namespace aoc2016 {
    void day4PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 4, 1, "None");
    }

    void day4PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 4, 2, "None");
    }
} // namespace aoc2016