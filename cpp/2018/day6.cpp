#include "aoc2018.h"
#include <aoc/maths.h>

/*
    Solution for Advent of Code 2018 day 6
    https://adventofcode.com/2018/day/6
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day6.txt";
} // namespace

namespace aoc2018 {
    void day6PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 6, 1, "None");
    }

    void day6PartTwo(bool doPrint) { (void)doPrint; }
} // namespace aoc2018