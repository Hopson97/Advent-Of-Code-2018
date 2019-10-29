#include "aoc2015.h"

#include <aoc/file_io.h>

/*
    Solution for Advent of Code 2015 day 1
    https://adventofcode.com/2015/day/1
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day1.txt";
} // namespace

namespace aoc2015 {
    void day1PartOne(bool doPrint)
    {
        int floor = 0;
        for (auto stair : aoc::file_io::readAsLine(INPUT_PATH)) {
            floor += stair == '(' ? 1 : -1;
        }
        aoc::output(doPrint, 2015, 1, 1, floor);
    }

    void day1PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 1, 2, "None");
    }
} // namespace aoc2015