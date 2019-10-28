#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 11
    https://adventofcode.com/2016/day/11
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day11.txt";
} // namespace

namespace aoc2016 {
    void day11PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 11, 1, "None");
    }

    void day11PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 11, 2, "None");
    }
} // namespace aoc2016