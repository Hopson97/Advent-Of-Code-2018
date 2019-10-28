#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 19
    https://adventofcode.com/2016/day/19
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day19.txt";
} // namespace

namespace aoc2016 {
    void day19PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 19, 1, "None");
    }

    void day19PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        output(doPrint, 2016, 19, 2, "None");
    }
} // namespace aoc2016