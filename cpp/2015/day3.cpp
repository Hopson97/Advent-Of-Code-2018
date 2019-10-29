#include "aoc2015.h"

#include <aoc/file_io.h>
#include <aoc/maths.h>

/*
    Solution for Advent of Code 2015 day 3
    https://adventofcode.com/2015/day/3
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day3.txt";
} // namespace

namespace aoc2015 {
    void day3PartOne(bool doPrint)
    {
        auto input = aoc::file_io::readAsLine(INPUT_PATH);
        aoc::maths::VectorSet<u16> visited;

        aoc::maths::Vector2<u16> location;
        int houses = 1;
        visited.insert(location);
        for (auto c : input) {
            // clang-format off
            switch (c) {
                case 'v': location.y++; break;
                case '<': location.x--; break;
                case '>': location.x++; break;
                case '^': location.y--; break;
                default: break;
            }
            // clang-format on
            if (visited.find(location) == visited.end()) {
                houses++;
                visited.insert(location);
            }   
        }

        aoc::output(doPrint, 2015, 3, 1, houses);
    }

    void day3PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2015, 3, 2, "None");
    }
} // namespace aoc2015