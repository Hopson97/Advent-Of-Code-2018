#include "aoc2015.h"

#include <aoc/file_io.h>
#include <aoc/string.h>

using namespace aoc::string;

/*
    Solution for Advent of Code 2015 day 4
    https://adventofcode.com/2015/day/4
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day5.txt";
    const std::string VOWELS = "aeiou";

    bool isNice(const std::string &input)
    {
        if (contains(input, "ab") || contains(input, "cd") ||
            contains(input, "pq") || contains(input, "xy")) {
            return false;
        }
        int vowels = 0;
        bool same = false;
        for (int i = 0; i < (int)input.length(); i++) {
            char c = input[i];
            if (contains(VOWELS, c)) {
                vowels++;
            }
            if (i != (int)input.length() - 1 && c == input[i + 1]) {
                same = true;
            }
        }
        if (vowels >= 3 && same) {
            return true;
        }
        return false;
    }

    bool isNice2(const std::string &input)
    {
        for (int i = 0; i < (int)input.length(); i++) {
            char c = input[i];
            (void)c;
        }
        return false;
    }
} // namespace

namespace aoc2015 {
    void day5PartOne(bool doPrint)
    {
        auto input = aoc::file_io::readAsLines(INPUT_PATH);
        aoc::output(doPrint, 2015, 4, 1,
                    std::count_if(input.cbegin(), input.cend(), isNice));
    }

    void day5PartTwo(bool doPrint)
    {
        auto input = aoc::file_io::readAsLines(INPUT_PATH);
        aoc::output(doPrint, 2015, 4, 2,
                    std::count_if(input.cbegin(), input.cend(), isNice2));
    }
} // namespace aoc2015