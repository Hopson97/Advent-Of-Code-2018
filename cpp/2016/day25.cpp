#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 25
    https://adventofcode.com/2016/day/25
*/

namespace {
    const char* INPUT_PATH = "2016/inputs/day25.txt";
} // namespace

namespace aoc2016 {
    void day25PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 25, 1, "None");
    }

    void day25PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 25, 2, "None");
    }
} // aoc2016