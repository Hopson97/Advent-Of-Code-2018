#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 3
    https://adventofcode.com/2016/day/3
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day3.txt";
} // namespace

namespace aoc2016 {
    void day3PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 3, 1, "None");
    }

    void day3PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 3, 2, "None");
    }
} // namespace aoc2016