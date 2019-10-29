#include "aoc2016.h"

#include <aoc/file_io.h>
#include <aoc/maths.h>

/*
    Solution for Advent of Code 2016 day 2
    https://adventofcode.com/2016/day/2
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day2.txt";
    const char *PAD = "123456789";
} // namespace

namespace aoc2016 {

    void day2PartOne(bool doPrint)
    {
        auto input = aoc::file_io::readAsLines(INPUT_PATH);
        aoc::maths::Point location;
        location.x = 1;
        location.y = 1;
        std::string code;
        for (const auto &line : input) {
            for (auto code : line) {
                // clang-format off
                switch (code) {
                    case 'D': if (location.y != 2) location.y++; break;
                    case 'L': if (location.x != 0) location.x--; break;
                    case 'R': if (location.x != 2) location.x++; break;
                    case 'U': if (location.y != 0) location.y--; break;
                    default: break;
                }
                // clang-format on
            }
            code.push_back(PAD[location.y * 3 + location.x]);
        }
        aoc::output(doPrint, 2016, 2, 1, code);
    }

    void day2PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 2, 2, "None");
    }
} // namespace aoc2016