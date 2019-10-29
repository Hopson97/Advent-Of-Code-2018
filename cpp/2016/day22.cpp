#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 22
    https://adventofcode.com/2016/day/22
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day22.txt";
} // namespace

namespace aoc2016 {
    void day22PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 22, 1, "None");
    }

    void day22PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 22, 2, "None");
    }
} // namespace aoc2016