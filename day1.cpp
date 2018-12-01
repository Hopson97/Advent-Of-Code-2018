//https://adventofcode.com/2018/day/1

#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_set>

void part1() {
    int freq = 0;
    std::fstream inFile("day1inp.txt");
    std::string line;
    while(std::getline(inFile, line)) {
        switch(line[0]) {
            case '+':
                freq += std::stoi(line.substr(1, line.length() - 1));
                break;
            case '-':
                freq -= std::stoi(line.substr(1, line.length() - 1));
                break;
            default:
                break;                
        }
    }
    std::cout << freq << '\n';
}

void part2() {
    int freq = 0;
    std::fstream inFile("day1inp.txt");
    std::string line;
    std::vector<int> changes;
    changes.reserve(1024);
    while(std::getline(inFile, line)) {
        switch(line[0]) {
            case '+':
                changes.push_back(std::stoi(line.substr(1, line.length() - 1)));
                break;
            case '-':
                changes.push_back(-std::stoi(line.substr(1, line.length() - 1)));
                break;
            default:
                break;                
        }
    }
    std::unordered_set<int> newFreqs;
    newFreqs.reserve(1024 * 64); //reverse the heck out of my memory

    while (true) {
        for (auto c : changes) {
            freq += c;
            if (newFreqs.find(freq) != newFreqs.end()) {
                std::cout << freq << '\n';
                return;
            }
            newFreqs.insert(freq);
        }
    }
}

int main() {
    part2();
}

