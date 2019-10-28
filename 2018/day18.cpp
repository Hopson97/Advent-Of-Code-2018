#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 18
    https://adventofcode.com/2018/day/18
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day18.txt";
} // namespace

namespace aoc2018 {
    void day18PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 18, 1, "None");
    }

    void day18PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 18, 2, "None");
    }
} // namespace aoc2018