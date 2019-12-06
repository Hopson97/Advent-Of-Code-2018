#include "aoc2019.h"
#include <aoc/file_io.h>
#include <aoc/string.h>
/*
    Solution for Advent of Code 2019 day 6
    https://adventofcode.com/2019/day/6
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day6.txt";

    int toInt(const std::string& s) {
        u8 a = s[0] - '0';
        u8 b = s[1] - '0';
        u8 c = s[2] - '0';

        return a | (b << 8) | c << 16;
    }

    auto findDirectOrbits()
    {
        auto in = aoc::file_io::readAsLines(INPUT_PATH);

        std::unordered_map<int, int> directOrbits;

        for (auto &line : in) {
            auto l = aoc::string::split(line, ')');
            directOrbits[toInt(l[1])] = toInt(l[0]);
        }

        return directOrbits;
    }
} // namespace

namespace aoc2019 {
    void day6PartOne(bool doPrint)
    {
        auto directOrbits = findDirectOrbits();
        int count = directOrbits.size();

        int COM = toInt("COM");

        for (auto &orbit : directOrbits) {
            auto planet = orbit.first;
            auto orbits = orbit.second;
            while (orbits != COM) {
                planet = orbits;
                orbits = directOrbits[planet];
                count++;
            }
        }

        aoc::output(doPrint, 2019, 6, 1, count);
    }

    void day6PartTwo(bool doPrint)
    {
        auto directOrbits = findDirectOrbits();

        int COM = toInt("COM");
        std::unordered_map<int, int> sanOrbits;
        {
            int SAN = toInt("SAN");
            int count = 0;
            int planet = SAN;
            int orbits = directOrbits[SAN];
            while (orbits != COM) {
                sanOrbits.emplace(orbits, count++);
                planet = orbits;
                orbits = directOrbits[planet];
            }
        }

        std::unordered_map<int, int> youOrbits;
        {
            int YOU = toInt("YOU");
            int count = 0;
            int planet = YOU;
            int orbits = directOrbits[YOU];
            while (orbits != COM) {
                youOrbits.emplace(orbits, count++ );
                planet = orbits;
                orbits = directOrbits[planet];
            }
        }

        std::vector<int> hops;
        for (auto& hop : sanOrbits)
        {
            if (youOrbits.find(hop.first) != youOrbits.end()) {
                hops.push_back(hop.second + youOrbits[hop.first]);
            }
        }

        toInt("TES");
        aoc::output(doPrint, 2019, 6, 2, *std::min_element(hops.cbegin(), hops.cend()));
    }
} // namespace aoc2019