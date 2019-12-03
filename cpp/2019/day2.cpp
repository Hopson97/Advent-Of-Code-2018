#include "aoc2019.h"
#include <aoc/file_io.h>
#include <aoc/string.h>

/*
    Solution for Advent of Code 2019 day 2
    https://adventofcode.com/2019/day/2
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day2.txt";

    void run(std::vector<int> &ops)
    {
        for (int i = 0; i < (int)ops.size(); i += 4) {
            auto op = ops[i];
            switch (op) {
                case 1:
                    ops[ops[i + 3]] = ops[ops[i + 1]] + ops[ops[i + 2]];
                    break;

                case 2:
                    ops[ops[i + 3]] = ops[ops[i + 1]] * ops[ops[i + 2]];
                    break;

                case 99:
                    return;

                default:
                    std::cout << "ERROR" << op << std::endl;
                    exit(-1);
            }
        }
    }

    auto getOps()
    {
        auto input = aoc::file_io::readAsLine(INPUT_PATH);
        auto opstrings = aoc::string::split(input, ',');
        std::vector<int> ops;
        std::transform(opstrings.begin(), opstrings.end(),
                       std::back_inserter(ops),
                       [](auto a) { return std::stoi(a); });
        return ops;
    }
} // namespace

namespace aoc2019 {
    void day2PartOne(bool doPrint)
    {
        auto ops = getOps();
        ops[1] = 12;
        ops[2] = 2;
        run(ops);

        aoc::output(doPrint, 2019, 2, 1, ops[0]);
    }

    void day2PartTwo(bool doPrint)
    {
        auto ops = getOps();
        auto reset = ops;
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                ops[1] = i;
                ops[2] = j;
                run(ops);
                if (ops[0] == 19690720) {
                    aoc::output(doPrint, 2019, 2, 2, (100 * i + j));
                    return;
                }
                else {
                    ops = reset;
                }
            }
        }
    }
} // namespace aoc2019