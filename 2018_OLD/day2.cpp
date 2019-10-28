#include "aoc2018.h"

namespace {
    const char *FILE_NAME = "2018/inputs/day2.txt";
}

void Day2::partOne()
{
    std::unordered_map<char, int> charCount;
    std::ifstream inFile(FILE_NAME);
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
    output(1, twice * thrice);
}

void Day2::partTwo()
{
    std::ifstream inFile(FILE_NAME);
    std::string line;
    std::vector<std::string> lines;
    std::string output;
    output.reserve(32);
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
                            output.push_back(word[j]);
                        }
                    }
                    AdventOfCode::output(1, output);
                    return;
                }
            }
            lines.push_back(line);
        }
    }();
}