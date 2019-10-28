#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 11
    https://adventofcode.com/2018/day/11
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day11.txt";
} // namespace

namespace aoc2018 {
    void day11PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 11, 1, "None");
    }

    void day11PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2018, 11, 2, "None");
    }
} // namespace aoc2018