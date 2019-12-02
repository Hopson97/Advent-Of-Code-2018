#include "aoc2019.h"
#include <aoc/file_io.h>
#include <aoc/string.h>

/*
    Solution for Advent of Code 2019 day 2
    https://adventofcode.com/2019/day/2
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day2.txt";
} // namespace

namespace aoc2019 {
    void day2PartOne(bool doPrint)
    {
        auto input = aoc::file_io::readAsLine(INPUT_PATH);
        auto opstrings = aoc::string::split(input, ',');

        std::vector<int> ops;
/*
        std::transform(opstrings.begin(), opstrings.end(), std::back_inserter(ops),
                       [](auto a) { return std::stoi(a); });

        for (int i = 0; i < (int)opstrings.size(); i += 4) {
            auto op = ops[i];
            switch (op) {
                case 1:
                    ops[i + 3] = ops[i + 1] + ops[i + 2];
                    break;

                case 2:
                    ops[i + 3] = ops[i + 1] * ops[i + 2];
                    break;

                case 99:
                    goto end;
                    break;

                default:
                    std::cout << "ERROR" << op << std::endl;
                    exit(-1);
            }
        }

    end:
*/
        aoc::output(doPrint, 2019, 2, 1, ops[0]);
    }

    void day2PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 2, 2, "None");
    }
} // namespace aoc2019