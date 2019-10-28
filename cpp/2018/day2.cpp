#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 2
    https://adventofcode.com/2018/day/2
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day2.txt";
} // namespace

namespace aoc2018 {
    void day2PartOne(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        std::unordered_map<char, int> charCount;
        std::string line;
        int twice = 0;
        int thrice = 0;
        while (std::getline(inFile, line)) {
            for (char c : line) {
                charCount[c]++;
            }
            bool doesAppearTwice = false;
            bool doesAppearThrice = false;
            for (auto &pair : charCount) {
                if (pair.second == 2) {
                    doesAppearTwice = true;
                }
                else if (pair.second == 3) {
                    doesAppearThrice = true;
                }
            }
            charCount.clear();
            twice += doesAppearTwice;
            thrice += doesAppearThrice;
        }
        aoc::output(doPrint, 2018, 2, 1, twice * thrice);
    }

    void day2PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        std::string line;
        std::vector<std::string> lines;
        std::string outputStr;
        outputStr.reserve(32);
        lines.reserve(256);
        [&] {
            while (std::getline(inFile, line)) {
                for (const auto &word : lines) {
                    int difference = 0;
                    for (std::size_t k = 0; k < line.length(); k++) {
                        difference += (word[k] != line[k]);
                    }
                    if (difference == 1) {
                        for (std::size_t j = 0; j < line.length(); j++) {
                            if (word[j] == line[j]) {
                                outputStr.push_back(word[j]);
                            }
                        }
                        aoc::output(doPrint, 2018, 2, 2, outputStr);
                        return;
                    }
                }
                lines.push_back(line);
            }
        }();
    }
} // namespace aoc2018