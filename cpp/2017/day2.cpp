#include "aoc2017.h"

#include <aoc/string.h>
/*
    Solution for Advent of Code 2017 day 2
    https://adventofcode.com/2017/day/2
*/

namespace {
    const char *INPUT_PATH = "2017/inputs/day2.txt";

    struct Grid {
        std::vector<std::vector<int>> grid;
        int width = 0;
        int height = 0;
    };

    auto createGrid()
    {
        std::ifstream inFile(INPUT_PATH);
        Grid grid;
        std::string line;
        while (std::getline(inFile, line)) {
            grid.grid.emplace_back();
            auto toks = aoc::string::split(line, '\t');
            grid.width = toks.size();
            grid.height++;
            for (auto line : toks) {
                grid.grid.back().push_back(std::stoi(line));
            }
        }
        return grid;
    }

} // namespace

namespace aoc2017 {
    void day2PartOne(bool doPrint)
    {
        auto grid = createGrid();

        int sum = 0;
        for (int i = 0; i < grid.height; i++) {
            sum +=
                *std::max_element(grid.grid[i].cbegin(), grid.grid[i].cend()) -
                *std::min_element(grid.grid[i].cbegin(), grid.grid[i].cend());
        }
        aoc::output(doPrint, 2017, 2, 1, sum);
    }

    void day2PartTwo(bool doPrint)
    {
        auto grid = createGrid();

        int sum = 0;
        for (int i = 0; i < grid.height; i++) {
            sum +=
                *std::max_element(grid.grid[i].cbegin(), grid.grid[i].cend()) -
                *std::min_element(grid.grid[i].cbegin(), grid.grid[i].cend());
        }
        aoc::output(doPrint, 2017, 2, 2, sum);
    }
} // namespace aoc2017