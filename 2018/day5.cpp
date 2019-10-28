#include "aoc2018.h"

namespace {
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
} // namespace

namespace day5 {

    void partOne()
    {
        std::ifstream inFile("2018/inputs/day5.txt");
        std::string line;
        line.reserve(50'000);
        inFile >> line;
        retractString(line);
        std::cout << line.length() << ' ';
    }

    void partTwo()
    {
        std::ifstream inFile("2018/inputs/day5.txt");
        if (!inFile.is_open()) {
            std::cout << "FILE IS NOT OPEN\n";
        }
        std::string line;
        line.reserve(50'000);
        inFile >> line;

        std::vector<int> sizes;
        for (char lower = 'a'; lower < 'z'; lower++) {
            std::string copy = line;
            char upper = toupper(lower);
            copy.erase(std::remove_if(copy.begin(), copy.end(),
                                      [upper, lower](unsigned char c) {
                                          return (int)c == upper ||
                                                 (int)c == lower;
                                      }),
                       copy.end());
            retractString(copy);
            sizes.push_back(copy.length());
        }
        std::cout << *std::min_element(sizes.begin(), sizes.end()) << '\n';
    }
} // namespace day5