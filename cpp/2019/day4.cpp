#include "aoc2019.h"
#include <charconv>
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

    template <typename F>
    bool meetsCriteria(int password, F crit)
    {
        std::array<char, 6> str;
        std::to_chars(str.begin(), str.end(), password);
        std::array<int, 10> adj{0};
        int maxValue = toi(str[0]);
        for (auto n : str) {
            int i = toi(n);
            if (i < maxValue) {
                return false;
            }
            maxValue = i;
            adj[i]++;
        }

        for (auto i : adj) {
            if (crit(i)) {
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
            if (meetsCriteria(i, [](int i) { return i >= 2; })) {
                count++;
            }
        }
        aoc::output(doPrint, 2019, 4, 1, count);
    }

    void day4PartTwo(bool doPrint)
    {
        int count = 0;
        for (int i = LEFT; i <= RIGHT; i++) {
            if (meetsCriteria(i, [](int i) { return i == 2; })) {
                count++;
            }
        }
        aoc::output(doPrint, 2019, 4, 2, count);
    }
} // namespace aoc2019
