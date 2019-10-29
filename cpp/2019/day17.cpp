#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 17
    https://adventofcode.com/2019/day/17
*/

namespace {
    const char* INPUT_PATH = "2019/inputs/day17.txt";
} // namespace

namespace aoc2019 {
    void day17PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 17, 1, "None");
    }

    void day17PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 17, 2, "None");
    }
} // aoc2019