//https://adventofcode.com/2018/day/1

#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_set>

#include "aoc2018.h"


namespace day1 {
    void partOne() 
    {
        //funny hack
        int freq = 
            #include "inputs/day1.txt"
        ;
        std::cout << freq << std::endl;
    }

    void partTwo() 
    {
        int freq = 0;
        std::fstream inFile("inputs/day1.txt");
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

}
