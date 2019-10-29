#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 22
    https://adventofcode.com/2018/day/22
*/

namespace {
    const char* INPUT_PATH = "2018/inputs/day22.txt";
} // namespace

namespace aoc2018 {
    void day22PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 22, 1, "None");
    }

    void day22PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 22, 2, "None");
    }
} // aoc2018