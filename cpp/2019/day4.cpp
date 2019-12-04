#include "aoc2019.h"

/*
    Solution for Advent of Code 2019 day 4
    https://adventofcode.com/2019/day/4
*/

namespace {
    const int LEFT = 146810;
    const int RIGHT = 612564;

    auto toi(char c)
    {
        return c - '0';
    }

    bool meetsCriteria(int password)
    {
        auto str = std::to_string(password);

        bool hasAdjacent = false;
        int maxValue = toi(str[0]);
        int previous = maxValue;
        str.erase(str.begin());
        for (auto n : str) {
            int i = toi(n);
            if (i < maxValue) {
                return false;
            }
            maxValue = i;

            if (i == previous) {
                hasAdjacent = true;
            }
            previous = i;
        }

        if (hasAdjacent) {
            return true;
        }
        else {
            return false;
        }
    }

    bool meetsMoreCriteria(int password)
    {
        auto str = std::to_string(password);

        std::array<int, 10> adj;

        int maxValue = toi(str[0]);
        int previous = maxValue;
        str.erase(str.begin());
        for (auto n : str) {
            int i = toi(n);
            if (i < maxValue) {
                return false;
            }
            maxValue = i;

            if (i == previous) {
                adj[i]++;
            }

            previous = i;
        }

        for (auto i : adj) {
            if (i == 2) {
                return true;
            }
        }

        return false;
    }
} // namespace

namespace aoc2019 {
    void day4PartOne(bool doPrint)
    {
        int count = 0;
        for (int i = LEFT; i <= RIGHT; i++) {
            if (meetsCriteria(i)) {
                count++;
            }
        }
        aoc::output(doPrint, 2019, 4, 1, count);
    }

    void day4PartTwo(bool doPrint)
    {
        int count = 0;
        for (int i = LEFT; i <= RIGHT; i++) {
            if (meetsMoreCriteria(i)) {
                count++;
            }
        }

        std::cout << meetsMoreCriteria(111122) << std::endl;
        std::cout << meetsMoreCriteria(112233) << std::endl;
        std::cout << meetsMoreCriteria(123444) << std::endl;

        aoc::output(doPrint, 2019, 4, 2, count);
    }
} // namespace aoc2019