#include "aoc2019.h"
#include <aoc/file_io.h>
#include <aoc/string.h>
#include <charconv>
#include <thread>

/*

    Solution for Advent of Code 2019 day 5
    https://adventofcode.com/2019/day/5
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day5.txt";

    void run(std::vector<int> &ops, int in)
    {

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
             std::cout << "Position: " << i << " Opcode: " << op << " ParamModes: " << paramMode1 << ' ' << paramMode2 << '\n';
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
                    ops[ops[i + 1]] = in;
                    i += 2;
                } break;

                case 4: {
                    int p1 = paramMode1 == 0 ? ops[ops[i + 1]] : ops[i + 1];
                    std::cout << p1;
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
                    int address = ops[i + 1];
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
                    int address = ops[i + 1];
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
                    return;

                default:
                    std::cout << "ERROR " << op << std::endl;
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
    void day5PartOne(bool doPrint)
    {
        auto ops = getOps();
        run(ops, 1);
        std::cout << "\n\n";

        aoc::output(doPrint, 2019, 5, 1, "None");
    }

    void day5PartTwo(bool doPrint)
    {
        auto ops = getOps();
        run(ops, 9);
        std::cout << "\n\n";

        aoc::output(doPrint, 2019, 5, 1, "None");
    }
} // namespace aoc2019