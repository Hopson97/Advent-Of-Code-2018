//https://adventofcode.com/2018/day/1

#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_set>
#include "../Benchmark.h"

void partOne() {
    //funny hack
    int freq = 
        #include "input.txt"
    ;
    std::cout << freq << '\n';
}

void partTwo() {
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

