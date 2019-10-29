#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 21
    https://adventofcode.com/2019/day/21
*/

namespace {
    const char* INPUT_PATH = "2019/inputs/day21.txt";
} // namespace

namespace aoc2019 {
    void day21PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 21, 1, "None");
    }

    void day21PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 21, 2, "None");
    }
} // aoc2019