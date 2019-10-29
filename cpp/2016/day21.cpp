#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 21
    https://adventofcode.com/2016/day/21
*/

namespace {
    const char* INPUT_PATH = "2016/inputs/day21.txt";
} // namespace

namespace aoc2016 {
    void day21PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 21, 1, "None");
    }

    void day21PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 21, 2, "None");
    }
} // aoc2016