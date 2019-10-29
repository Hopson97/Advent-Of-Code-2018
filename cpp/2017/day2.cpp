#include "aoc2017.h"

#include <aoc/string.h>
/*
    Solution for Advent of Code 2017 day 2
    https://adventofcode.com/2017/day/2
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day2.txt";
} // namespace

namespace aoc2017 {
    void day2PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 2, 1, "None");

        std::string input = "a b  c   d e";
        std::cout << aoc::string::strip(input) << std::endl;
    }

    void day2PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 2, 2, "None");
    }
} // namespace aoc2017