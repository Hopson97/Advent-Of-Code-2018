#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 10
    https://adventofcode.com/2019/day/10
*/

namespace {
    const char* INPUT_PATH = "2019/inputs/day10.txt";
} // namespace

namespace aoc2019 {
    void day10PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 10, 1, "None");
    }

    void day10PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 10, 2, "None");
    }
} // aoc2019