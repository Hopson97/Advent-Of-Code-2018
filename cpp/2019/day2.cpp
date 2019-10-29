#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 2
    https://adventofcode.com/2019/day/2
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day2.txt";
} // namespace

namespace aoc2019 {
    void day2PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 2, 1, "None");
    }

    void day2PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 2, 2, "None");
    }
} // namespace aoc2019