#include "aoc2015.h"

/*
    Solution for Advent of Code 2015 day 18
    https://adventofcode.com/2015/day/18
*/

namespace {
    const char* INPUT_PATH = "2015/inputs/day18.txt";
} // namespace

namespace aoc2015 {
    void day18PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 18, 1, "None");
    }

    void day18PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 18, 2, "None");
    }
} // aoc2015