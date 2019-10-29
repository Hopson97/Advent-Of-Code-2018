#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 6
    https://adventofcode.com/2019/day/6
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day6.txt";
} // namespace

namespace aoc2019 {
    void day6PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 6, 1, "None");
    }

    void day6PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 6, 2, "None");
    }
} // namespace aoc2019