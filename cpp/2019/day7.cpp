#include "aoc2019.h"
#include <aoc/file_io.h>
#include <aoc/string.h>
#include <charconv>



/*
    Solution for Advent of Code 2019 day 7
    https://adventofcode.com/2019/day/7
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day7.txt";

    int run(std::vector<int> ops, std::list<int> input)
    {
        std::string output;
        for (int i = 0;;) {
            int paramMode1 = 0;
            int paramMode2 = 0;
            auto op = ops[i];
            if (op > 1000) {
                std::array<char, 4> buff;
                std::to_chars(buff.begin(), buff.end(), op);

                paramMode2 = buff[0] - '0';
                paramMode1 = buff[1] - '0';
                op = buff[3] - '0';
            }
            else if (op > 100) {
                std::array<char, 3> buff;
                std::to_chars(buff.begin(), buff.end(), op);

                paramMode1 = buff[0] - '0';
                op = buff[2] - '0';
            }
            // std::this_thread::sleep_for(std::chrono::milliseconds(500));
            switch (op) {
                case 1: {
                    int address = ops[i + 3];
                    int p1 = paramMode1 == 0 ? ops[ops[i + 1]] : ops[i + 1];
                    int p2 = paramMode2 == 0 ? ops[ops[i + 2]] : ops[i + 2];
                    ops[address] = p1 + p2;
                    i += 4;
                } break;

                case 2: {
                    int address = ops[i + 3];
                    int p1 = paramMode1 == 0 ? ops[ops[i + 1]] : ops[i + 1];
                    int p2 = paramMode2 == 0 ? ops[ops[i + 2]] : ops[i + 2];
                    ops[address] = p1 * p2;
                    i += 4;
                } break;

                case 3: {
                    ops[ops[i + 1]] = *input.begin();
                    input.pop_front();
                    i += 2;
                } break;

                case 4: {
                    int p1 = paramMode1 == 0 ? ops[ops[i + 1]] : ops[i + 1];
                    output += std::to_string(p1);
                    i += 2;
                } break;

                case 5: {
                    int p1 = paramMode1 == 0 ? ops[ops[i + 1]] : ops[i + 1];
                    int p2 = paramMode2 == 0 ? ops[ops[i + 2]] : ops[i + 2];
                    if (p1 != 0) {
                        i = p2;
                    }
                    else {
                        i += 3;
                    }
                } break;

                case 6: {
                    int p1 = paramMode1 == 0 ? ops[ops[i + 1]] : ops[i + 1];
                    int p2 = paramMode2 == 0 ? ops[ops[i + 2]] : ops[i + 2];
                    if (p1 == 0) {
                        i = p2;
                    }
                    else {
                        i += 3;
                    }
                } break;

                case 7: {
                    int address = ops[i + 3];
                    int p1 = paramMode1 == 0 ? ops[ops[i + 1]] : ops[i + 1];
                    int p2 = paramMode2 == 0 ? ops[ops[i + 2]] : ops[i + 2];
                    if (p1 < p2) {
                        ops[address] = 1;
                    }
                    else {
                        ops[address] = 0;
                    }
                    i += 4;
                } break;

                case 8: {
                    int address = ops[i + 3];
                    int p1 = paramMode1 == 0 ? ops[ops[i + 1]] : ops[i + 1];
                    int p2 = paramMode2 == 0 ? ops[ops[i + 2]] : ops[i + 2];
                    if (p1 == p2) {
                        ops[address] = 1;
                    }
                    else {
                        ops[address] = 0;
                    }
                    i += 4;
                } break;

                case 99:
                    return std::stoi(output);

                default:
                    std::cout << "ERROR " << op << std::endl;
                    exit(-1);
            }
        }
        return std::stoi(output);
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
    void day7PartOne(bool doPrint)
    {
        auto input = getOps();
        std::vector<int> phase{0, 1, 2, 3, 4};
        int maxOutput = 0;
        while(std::next_permutation(phase.begin(), phase.end())) {
            int output = 0;
            for (auto in : phase) {
                output = run(input, {in, output});
                maxOutput = std::max(maxOutput, output);
            }
        }
        aoc::output(doPrint, 2019, 7, 1, maxOutput);
    }

    void day7PartTwo(bool doPrint)
    {
        auto input = getOps();
        std::vector<int> phase{5, 6, 7, 8, 9};
        int maxOutput = 0;
        while(std::next_permutation(phase.begin(), phase.end())) {
            int output = 0;
            for (auto in : phase) {
                output = run(input, {in, output});
                maxOutput = std::max(maxOutput, output);
            }
        }
        aoc::output(doPrint, 2019, 7, 2, "None");
    }
} // namespace aoc2019