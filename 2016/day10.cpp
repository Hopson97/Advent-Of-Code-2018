#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 10
    https://adventofcode.com/2016/day/10
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day10.txt";
} // namespace

namespace aoc2016 {
    void day10PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 10, 1, "None");
    }

    void day10PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 10, 2, "None");
    }
} // namespace aoc2016