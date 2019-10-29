#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 25
    https://adventofcode.com/2015/day/25
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day25.txt";
} // namespace

namespace aoc2015 {
    void day25PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 25, 1, "None");
    }

    void day25PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 25, 2, "None");
    }
} // namespace aoc2015