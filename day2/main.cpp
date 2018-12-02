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
    const auto length    = line.length();
    const auto lineCount = lines.size();
    int indexA = 0;
    int indexB = 0;
    [&]{
    for (size_t i = 0; i < lineCount; i++) {
        for (size_t j = 0; j < lineCount; j++) {
            if (i == j) continue;
            int diff = 0;
            for (size_t k = 0; k < length; k++) {
                diff += (lines[i][k] != lines[j][k]);
            }
            if (diff == 1) {
                indexA = i;
                indexB = j; 
                return;
            }
        }
    }}();
    std::cout << "\n" << lines[indexA] << "\n" << lines[indexB] << "\n";
    std::string output;
    for (size_t i = 0; i < length; i++) {
        if (lines[indexA][i] == lines[indexB][i]) {
            output.push_back(lines[indexA][i]);
        }
    }
    std::cout << output << '\n';
}

int main() {
    Benchmark<100> p1bm("Part 1", &partOne);
    Benchmark<100> p2bm("Part 2", &partTwo);
    Benchmark<100> bbm("Part 1 + Part 2", []{
        partOne(); 
        partTwo();
    });
    p1bm.outputTimes();
    p2bm.outputTimes();
    bbm .outputTimes();

}