#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 20
    https://adventofcode.com/2019/day/20
*/

namespace {
    const char* INPUT_PATH = "2019/inputs/day20.txt";
} // namespace

namespace aoc2019 {
    void day20PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 20, 1, "None");
    }

    void day20PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 20, 2, "None");
    }
} // aoc2019