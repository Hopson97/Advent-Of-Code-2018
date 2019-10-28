#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 19
    https://adventofcode.com/2018/day/19
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day19.txt";
} // namespace

namespace aoc2018 {
    void day19PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 19, 1, "None");
    }

    void day19PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 19, 2, "None");
    }
} // namespace aoc2018