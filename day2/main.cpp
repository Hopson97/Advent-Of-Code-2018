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
    std::string output;
    lines.reserve(256);
    [&]{
    while (std::getline(inFile, line)) {
        lines.push_back(line);
        for (const auto& word : lines) {
            int difference = 0;
            for (size_t k = 0; k < line.length(); k++) {
                difference += (word[k] != line[k]);
            }
            if (difference == 1) {
                for (size_t j = 0; j < line.length(); j++) {
                    if (word[j] == line[j]) {
                        output.push_back(word[j]);
                    }
                }
                std::cout << output << '\n';
                return;
            }
        }
    }}();
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
    bbm.outputTimes();
}