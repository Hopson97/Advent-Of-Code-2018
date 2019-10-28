#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 6
    https://adventofcode.com/2016/day/6
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day6.txt";
} // namespace

namespace aoc2016 {
    void day6PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 6, 1, "None");
    }

    void day6PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 6, 2, "None");
    }
} // namespace aoc2016