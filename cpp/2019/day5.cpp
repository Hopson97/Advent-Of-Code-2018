#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 5
    https://adventofcode.com/2019/day/5
*/

namespace {
    const char* INPUT_PATH = "2019/inputs/day5.txt";
} // namespace

namespace aoc2019 {
    void day5PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 5, 1, "None");
    }

    void day5PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 5, 2, "None");
    }
} // aoc2019