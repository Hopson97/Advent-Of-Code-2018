// https://adventofcode.com/2018/day/1

#include <fstream>
#include <iostream>
#include <unordered_set>
#include <vector>

#include "aoc2018.h"

void Day1::partOne()
{
    // funny hack
    int freq =
#include "inputs/day1.txt"
        ;
    output(1, freq);
}

void Day1::partTwo()
{
    int freq = 0;
    std::fstream inFile("2018/inputs/day1.txt");
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
                output(2, freq);
                return;
            }
            newFreqs.insert(freq);
        }
    }
}