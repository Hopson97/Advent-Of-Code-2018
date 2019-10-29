#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 16
    https://adventofcode.com/2019/day/16
*/

namespace {
    const char* INPUT_PATH = "2019/inputs/day16.txt";
} // namespace

namespace aoc2019 {
    void day16PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 16, 1, "None");
    }

    void day16PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 16, 2, "None");
    }
} // aoc2019