#include "aoc2019.h"
#include <aoc/file_io.h>
#include <aoc/maths.h>
#include <aoc/string.h>
#include <thread>

/*
    Solution for Advent of Code 2019 day 3
    https://adventofcode.com/2019/day/3
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day3.txt";
    using Vec = aoc::maths::Vector2<int>;
    const std::unordered_map<char, Vec> DIRECTIONS = {{'R', Vec{1, 0}},
                                                      {'D', Vec{0, -1}},
                                                      {'L', Vec{-1, 0}},
                                                      {'U', Vec{0, 1}}};

    template <typename F>
    void walk(std::vector<std::string> &input, Vec &location, F onStep)
    {
        for (auto &direction : input) {
            auto directionVector = DIRECTIONS.at(direction[0]);
            direction.erase(direction.begin());
            int amount = std::stoi(direction);

            if (directionVector.x != 0) {
                for (int i = 0; i < amount; i++) {
                    location.x += directionVector.x;
                    onStep();
                }
            }
            else if (directionVector.y != 0) {
                for (int i = 0; i < amount; i++) {
                    location.y += directionVector.y;
                    onStep();
                }
            }
        }
    }
} // namespace

namespace aoc2019 {
    void day3PartOne(bool doPrint)
    {
        auto input = aoc::file_io::readAsLines(INPUT_PATH);
        auto blueWire = aoc::string::split(input[0], ',');
        auto redWire = aoc::string::split(input[1], ',');

        aoc::maths::VectorSet<int> visited;
        visited.emplace(Vec{0, 0});
    
        Vec blueLocation;
        walk(blueWire, blueLocation, [&]() { visited.emplace(blueLocation); });

        std::vector<int> intersects;
        Vec redLocation;
        walk(redWire, redLocation, [&]() {
            if (visited.find(redLocation) != visited.cend()) {
                intersects.push_back(std::abs(redLocation.x) +
                                     std::abs(redLocation.y));
            }
        });

        aoc::output(doPrint, 2019, 3, 1,
                    *std::min_element(intersects.cbegin(), intersects.cend()));
    }

    void day3PartTwo(bool doPrint)
    {
        auto input = aoc::file_io::readAsLines(INPUT_PATH);
        auto blueWire = aoc::string::split(input[0], ',');
        auto redWire = aoc::string::split(input[1], ',');

        std::unordered_map<Vec, int, aoc::maths::Vector2Hash<int>> visited;

        visited.emplace(Vec{0, 0}, 0);

    
        Vec blueLocation;
        int blueDistance = 0;
        walk(blueWire, blueLocation, [&]() 
        { 
            blueDistance++;
            visited.emplace(blueLocation, blueDistance); 
        });
        

        std::vector<int> intersects;
        Vec redLocation;
        int redDistance = 0;
        walk(redWire, redLocation, [&]() {
            redDistance++;
            if (visited.find(redLocation) != visited.cend()) {
                intersects.push_back(redDistance + visited.at(redLocation));
            }
        });

       aoc::output(doPrint, 2019, 3, 2,
                   *std::min_element(intersects.cbegin(), intersects.cend()));
    }
} // namespace aoc2019