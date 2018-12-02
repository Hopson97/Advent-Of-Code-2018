#include <fstream>
#include <iostream>
#include <unordered_map>
#include "../Benchmark.h"

void partOne() {
    std::unordered_map<char, int> charCount;
    std::ifstream inFile("input.txt");
    std::string line;
    int twice = 0;
    int thrice = 0;
    while (std::getline(inFile, line)) {
        for (char c : line) {
            charCount[c]++;
        }
        bool doesAppearTwice = false;
        bool doesAppearThrice = false;
        for (auto& pair : charCount) {
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
    std::cout << twice * thrice << '\n';
}

void partTwo() {
    std::ifstream inFile("input.txt");
    std::string line;
    std::vector<std::string> lines;
    lines.reserve(256);
    while (std::getline(inFile, line)) {
        lines.push_back(line);
    }
    const auto length = line.length();
    const auto lineCount  = lines.size();
    int indexA = 0;
    int indexB = 0;
    [&]{
    for (size_t oi = 0; oi < lineCount; oi++) {
        for (size_t ii = 0; ii < lineCount; ii++) {
            if (ii == oi) continue;
            int diff = 0;
            for (size_t i = 0; i < length; i++) {
                diff += (lines[oi][i] != lines[ii][i]);
            }
            if (diff == 1) {
                indexA = oi;
                indexB = ii; 
                return;
            }
        }
    }}();
    std::string output;
    for (size_t i = 0; i < length; i++) {
        if (lines[indexA][i] == lines[indexB][i]) {
            output.push_back(lines[indexA][i]);
        }
    }
    std::cout << output << '\n';
}

int main() {
    benchmark(100, []{
        partOne();
        partTwo();
    });
}