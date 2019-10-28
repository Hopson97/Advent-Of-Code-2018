#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 7
    https://adventofcode.com/2016/day/7
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day7.txt";
} // namespace

namespace aoc2016 {
    void day7PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 7, 1, "None");
    }

    void day7PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 7, 2, "None");
    }
} // namespace aoc2016