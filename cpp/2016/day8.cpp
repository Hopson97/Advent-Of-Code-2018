#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 8
    https://adventofcode.com/2016/day/8
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day8.txt";
} // namespace

namespace aoc2016 {
    void day8PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 8, 1, "None");
    }

    void day8PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 8, 2, "None");
    }
} // namespace aoc2016