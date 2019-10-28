#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 17
    https://adventofcode.com/2018/day/17
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day17.txt";
} // namespace

namespace aoc2018 {
    void day17PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 17, 1, "None");
    }

    void day17PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 17, 2, "None");
    }
} // namespace aoc2018