#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 1
    https://adventofcode.com/2018/day/1
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day1.txt";
} // namespace

namespace aoc2018 {
    void day1PartOne(bool doPrint)
    {
        // funny hack
        int freq =
#include "inputs/day1.txt"
            ;
        output(doPrint, 2018, 1, 1, freq);
    }

    void day1PartTwo(bool doPrint)
    {
        int freq = 0;
        std::fstream inFile(INPUT_PATH);
        std::vector<int> changes;
        changes.reserve(1024);
        int in;
        while (inFile >> in) {
            changes.push_back(in);
        }
        std::unordered_set<int> newFreqs;
        newFreqs.reserve(1024 * 256); // reverse the heck out of my memory

        while (true) {
            for (auto c : changes) {
                freq += c;
                if (newFreqs.find(freq) != newFreqs.end()) {
                    output(doPrint, 2018, 1, 2, freq);
                    return;
                }
                newFreqs.insert(freq);
            }
        }
    }
} // namespace aoc2018