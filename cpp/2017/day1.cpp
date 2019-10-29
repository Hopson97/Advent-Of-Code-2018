#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 1
    https://adventofcode.com/2017/day/1
*/

namespace {
    const char* INPUT_PATH = "2017/inputs/day1.txt";
} // namespace

namespace aoc2017 {
    void day1PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        std::string input;
        std::getline(inFile, input);
        int sum = 0;
        for (int i = 0; i < (int)input.length(); i++) {
            int j = i + 1;
            if (j == (int)input.length()) {
                std::cout << "Wrap\n";
                j = 0;
            }
            if (input[i] == input[j]) {
                sum += input[i] - '0';
            }
        }
        aoc::output(doPrint, 2017, 1, 1, sum);
    }

    void day1PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2017, 1, 2, "none");
    }
} // aoc2017