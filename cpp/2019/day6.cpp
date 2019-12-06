#include "aoc2019.h"
#include <aoc/file_io.h>
#include <aoc/string.h>
/*
    Solution for Advent of Code 2019 day 6
    https://adventofcode.com/2019/day/6
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day6.txt";
} // namespace

namespace aoc2019 {
    void day6PartOne(bool doPrint)
    {
        auto in = aoc::file_io::readAsLines(INPUT_PATH);

        std::unordered_map<std::string, std::string> directOrbits;

        for (auto &line : in) {
            auto l = aoc::string::split(line, ')');
            directOrbits[l[1]] = l[0];
        }
        int count = directOrbits.size();

        for (auto &orbit : directOrbits) {
            std::string planet = orbit.first;
            std::string orbits = orbit.second;
            while (orbits != "COM") {
                planet = orbits;
                orbits = directOrbits[planet];
                count++;
            }
        }

        aoc::output(doPrint, 2019, 6, 1, count);
    }

    void day6PartTwo(bool doPrint)
    {
        auto in = aoc::file_io::readAsLines(INPUT_PATH);

        std::unordered_map<std::string, std::string> directOrbits;

        for (auto &line : in) {
            auto l = aoc::string::split(line, ')');
            directOrbits[l[1]] = l[0];
        }

        std::unordered_map<std::string, int> sanOrbits;
        {
            int count = 0;
            std::string planet = "SAN";
            std::string orbits = directOrbits["SAN"];
            while (orbits != "COM") {
                sanOrbits.emplace(orbits, count++);
                planet = orbits;
                orbits = directOrbits[planet];
            }
        }

        std::unordered_map<std::string, int> youOrbits;
        {
            int count = 0;
            std::string planet = "YOU";
            std::string orbits = directOrbits["YOU"];
            while (orbits != "COM") {
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
                std::cout << "Hops to get to: " << hop.first << " - San: " << hop.second << " You: " <<  youOrbits[hop.first] << " OT: " << hops.back() << std::endl;
            }
        }


        aoc::output(doPrint, 2019, 6, 2, *std::min_element(hops.cbegin(), hops.cend()));
    }
} // namespace aoc2019