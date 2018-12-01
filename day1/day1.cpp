//https://adventofcode.com/2018/day/1

#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_set>
#include <chrono>

void part1() {
    //funny hack
    int freq = 
        #include "input.txt"
    ;
    std::cout << freq << '\n';
}

void part2() {
    int freq = 0;
    std::fstream inFile("input.txt");
    std::vector<int> changes;
    changes.reserve(1024);
    int in;
    while(inFile >> in) {
        changes.push_back(in);
    }
    std::unordered_set<int> newFreqs;
    newFreqs.reserve(1024 * 256); //reverse the heck out of my memory

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
    auto begin = std::chrono::high_resolution_clock::now();
    part1();
    part2();
    auto end = std::chrono::high_resolution_clock::now();
    auto time = end - begin;
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(time);
    std::cout << "Time: " << ms.count() << "ms\n";
}

