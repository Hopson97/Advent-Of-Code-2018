#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 23
    https://adventofcode.com/2019/day/23
*/

namespace {
    const char* INPUT_PATH = "2019/inputs/day23.txt";
} // namespace

namespace aoc2019 {
    void day23PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 23, 1, "None");
    }

    void day23PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 23, 2, "None");
    }
} // aoc2019