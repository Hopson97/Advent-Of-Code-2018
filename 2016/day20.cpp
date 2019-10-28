#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 20
    https://adventofcode.com/2016/day/20
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day20.txt";
} // namespace

namespace aoc2016 {
    void day20PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 20, 1, "None");
    }

    void day20PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 20, 2, "None");
    }
} // namespace aoc2016