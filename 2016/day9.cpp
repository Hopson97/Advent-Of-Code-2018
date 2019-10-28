#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 9
    https://adventofcode.com/2016/day/9
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day9.txt";
} // namespace

namespace aoc2016 {
    void day9PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 9, 1, "None");
    }

    void day9PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 9, 2, "None");
    }
} // namespace aoc2016