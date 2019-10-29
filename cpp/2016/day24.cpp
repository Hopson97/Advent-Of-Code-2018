#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 24
    https://adventofcode.com/2016/day/24
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day24.txt";
} // namespace

namespace aoc2016 {
    void day24PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 24, 1, "None");
    }

    void day24PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 24, 2, "None");
    }
} // namespace aoc2016