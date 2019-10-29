#include "aoc2015.h"

#include <aoc/file_io.h>
#include <aoc/string.h>
#include <numeric>

/*
    Solution for Advent of Code 2015 day 2
    https://adventofcode.com/2015/day/2
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day2.txt";
} // namespace

namespace aoc2015 {
    void day2PartOne(bool doPrint)
    {
        auto input = aoc::file_io::readAsLines(INPUT_PATH);
        int sum = 0;
        for (const auto &present : input) {
            auto dims = aoc::string::split(present, 'x');
            int length = std::stoi(dims[0]);
            int width = std::stoi(dims[1]);
            int height = std::stoi(dims[2]);

            int lw = length * width;
            int wh = width * height;
            int hl = height * length;
            int total = 2 * lw + 2 * wh + 2 * hl;
            std::vector<int> sides = {lw, wh, hl};
            total += *std::min_element(sides.cbegin(), sides.cend());
            sum += total;
        }

        aoc::output(doPrint, 2015, 2, 1, sum);
    }

    void day2PartTwo(bool doPrint)
    {
        auto input = aoc::file_io::readAsLines(INPUT_PATH);
        int sum = 0;
        for (const auto &present : input) {
            auto dimsString = aoc::string::split(present, 'x');
            std::vector<int> dims;
            std::transform(dimsString.cbegin(), dimsString.cend(),
                           std::back_insert_iterator(dims),
                           [](std::string s) { return std::stoi(s); });
            std::sort(dims.begin(), dims.end());
            sum += dims[0] * 2 + dims[1] * 2 +
                   std::accumulate(dims.begin(), dims.end(), 1,
                                   std::multiplies<double>());
        }
        aoc::output(doPrint, 2015, 2, 2, sum);
    }
} // namespace aoc2015