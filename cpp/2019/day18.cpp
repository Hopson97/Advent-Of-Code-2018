#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 18
    https://adventofcode.com/2019/day/18
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day18.txt";
} // namespace

namespace aoc2019 {
    void day18PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 18, 1, "None");
    }

    void day18PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 18, 2, "None");
    }
} // namespace aoc2019