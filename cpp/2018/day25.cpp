#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 25
    https://adventofcode.com/2018/day/25
*/

namespace {
    const char* INPUT_PATH = "2018/inputs/day25.txt";
} // namespace

namespace aoc2018 {
    void day25PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 25, 1, "None");
    }

    void day25PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 25, 2, "None");
    }
} // aoc2018