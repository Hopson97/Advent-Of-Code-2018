#include "aoc2017.h"

/*
    Solution for Advent of Code 2017 day 1
    https://adventofcode.com/2017/day/1
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day1.txt";
    int sum(const std::string &input, int skip)
    {
        int sum = 0;
        int length = input.length();
        for (int i = 0; i < length; i++) {
            if (input[i] == input[(i + skip) % length]) {
                sum += input[i] - '0';
            }
        }
        return sum;
    }
} // namespace

namespace aoc2017 {
    void day1PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        std::string input;
        std::getline(inFile, input);
        aoc::output(doPrint, 2017, 1, 1, sum(input, 1));
    }

    void day1PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        std::string input;
        std::getline(inFile, input);
        aoc::output(doPrint, 2017, 1, 2, sum(input, input.length() / 2));
    }
} // namespace aoc2017