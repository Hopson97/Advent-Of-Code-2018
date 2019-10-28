#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 18
    https://adventofcode.com/2016/day/18
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day18.txt";
} // namespace

namespace aoc2016 {
    void day18PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 18, 1, "None");
    }

    void day18PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 18, 2, "None");
    }
} // namespace aoc2016