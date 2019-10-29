#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 25
    https://adventofcode.com/2017/day/25
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day25.txt";
} // namespace

namespace aoc2017 {
    void day25PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 25, 1, "None");
    }

    void day25PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 25, 2, "None");
    }
} // namespace aoc2017