#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 19
    https://adventofcode.com/2019/day/19
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day19.txt";
} // namespace

namespace aoc2019 {
    void day19PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 19, 1, "None");
    }

    void day19PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 19, 2, "None");
    }
} // namespace aoc2019