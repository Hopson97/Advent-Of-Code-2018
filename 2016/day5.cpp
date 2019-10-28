#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 5
    https://adventofcode.com/2016/day/5
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day5.txt";
} // namespace

namespace aoc2016 {
    void day5PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 5, 1, "None");
    }

    void day5PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 5, 2, "None");
    }
} // namespace aoc2016