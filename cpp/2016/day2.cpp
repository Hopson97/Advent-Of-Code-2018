#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 2
    https://adventofcode.com/2016/day/2
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day2.txt";
} // namespace

namespace aoc2016 {
    void day2PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 2, 1, "None");
    }

    void day2PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 2, 2, "None");
    }
} // namespace aoc2016