#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 3
    https://adventofcode.com/2016/day/3
*/

#include <aoc/file_io.h>
#include <aoc/string.h>

namespace {
    const char *INPUT_PATH = "2016/inputs/day3.txt";
} // namespace

namespace aoc2016 {
    void day3PartOne(bool doPrint)
    {
        auto input = aoc::file_io::readAsLines(INPUT_PATH);
        for (const auto &line : input) {
            std::vector<int> sides;
            std::string number;
            for (char c : line) {
                if (c == ' ') {
                    if (!number.empty()) {
                        sides.push_back(std::stoi(number));
                        number.clear();
                    }
                }
                else {
                    number.push_back(c);
                }
            }
            sides.push_back(std::stoi(number));
        }
        aoc::output(doPrint, 2016, 3, 1, "None");
    }

    void day3PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2016, 3, 2, "None");
    }
} // namespace aoc2016