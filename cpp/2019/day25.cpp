#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 25
    https://adventofcode.com/2019/day/25
*/

namespace {
    const char* INPUT_PATH = "2019/inputs/day25.txt";
} // namespace

namespace aoc2019 {
    void day25PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 25, 1, "None");
    }

    void day25PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 25, 2, "None");
    }
} // aoc2019