#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 5
    https://adventofcode.com/2018/day/5
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day5.txt";
    void retractString(std::string &str)
    {
        bool found = true;
        while (found) {
            found = false;
            for (auto itr = str.begin(); itr < str.end();) {
                if ((int)*itr == (int)*(itr + 1) - 32 ||
                    (int)*itr - 32 == (int)*(itr + 1)) {
                    itr = str.erase(itr);
                    itr = str.erase(itr);
                    found = true;
                }
                itr++;
            }
        }
    }
} // namespace

namespace aoc2018 {
    void day5PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        std::string line;
        line.reserve(50'000);
        inFile >> line;
        retractString(line);
        aoc::output(doPrint, 2018, 5, 1, line.length());
    }

    void day5PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        std::string line;
        line.reserve(50'000);
        inFile >> line;

        std::vector<int> sizes;
        for (char lower = 'a'; lower < 'z'; lower++) {
            std::string copy = line;
            char upper = toupper(lower);
            copy.erase(std::remove_if(copy.begin(), copy.end(),
                                      [upper, lower](unsigned char c) {
                                          return (int)c == upper ||
                                                 (int)c == lower;
                                      }),
                       copy.end());
            retractString(copy);
            sizes.push_back(copy.length());
        }
        aoc::output(doPrint, 2018, 5, 2,
                    *std::min_element(sizes.cbegin(), sizes.cend()));
    }
} // namespace aoc2018