#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 24
    https://adventofcode.com/2019/day/24
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day24.txt";
} // namespace

namespace aoc2019 {
    void day24PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 24, 1, "None");
    }

    void day24PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 24, 2, "None");
    }
} // namespace aoc2019