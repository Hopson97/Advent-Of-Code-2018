#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 23
    https://adventofcode.com/2016/day/23
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day23.txt";
} // namespace

namespace aoc2016 {
    void day23PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 23, 1, "None");
    }

    void day23PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 23, 2, "None");
    }
} // namespace aoc2016