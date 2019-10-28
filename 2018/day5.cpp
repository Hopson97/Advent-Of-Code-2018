#include "../Benchmark.h"
#include <fstream>
#include <iostream>
#include <unordered_map>

void retractString(std::string &str)
{
    bool found = true;
    while (found) {
        found = false;
        for (auto itr = str.begin(); itr < str.end();) {
            if ((int)*itr == (int)*(itr + 1) - 32 ||
                (int)*itr - 32 == (int)*(itr + 1)) {
                itr = str.erase(itr);
                itr = str.erase(itr);
                found = true;
            }
            itr++;
        }
    }
}

void partOne()
{
    std::ifstream inFile("input.txt");
    std::string line;
    line.reserve(50'000);
    inFile >> line;
    retractString(line);
    std::cout << line.length() << ' ';
}

void partTwo()
{
    std::ifstream inFile("input.txt");
    std::string line;
    line.reserve(50'000);
    inFile >> line;

    std::vector<int> sizes;
    for (char lower = 'a'; lower < 'z'; lower++) {
        std::string copy = line;
        char upper = toupper(lower);
        copy.erase(std::remove_if(copy.begin(), copy.end(),
                                  [upper, lower](unsigned char c) {
                                      return (int)c == upper || (int)c == lower;
                                  }),
                   copy.end());
        retractString(copy);
        sizes.push_back(copy.length());
    }
    std::cout << *std::min_element(sizes.begin(), sizes.end()) << '\n';
}

int main()
{

    Benchmark<10> p1bm("Part 1", &partOne);
    Benchmark<10> p2bm("Part 2", &partTwo);
    Benchmark<10> bbm("Part 1 + Part 2", [] {
        partOne();
        partTwo();
    });
    p1bm.outputTimes();
    p2bm.outputTimes();
    bbm.outputTimes();
}