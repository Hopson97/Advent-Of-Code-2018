#include "aoc2019.h"
#include <aoc/file_io.h>
#include <aoc/string.h>
#include <charconv>

/*
    Solution for Advent of Code 2019 day 8
    https://adventofcode.com/2019/day/8
*/

namespace {
    const char *INPUT_PATH = "2019/inputs/day8.txt";
    constexpr int WIDTH = 25;
    constexpr int HEIGHT = 6;
    constexpr int LAYER_SIZE = WIDTH * HEIGHT;


    struct Layer {
        std::array<int, 3> count{0};
    };
} // namespace


namespace aoc2019 {
    void day8PartOne(bool doPrint)
    {
        auto in = aoc::file_io::readAsLine(INPUT_PATH);

        std::vector<Layer> layers;
        Layer layer;
        int i = 0;
        for (auto c : in) {
            layer.count[(c - '0')]++;
            if (++i == LAYER_SIZE) {
                i = 0;
                layers.push_back(layer);
                layer.count.fill(0);
            }
        }

        std::cout << layers.size() << std::endl;

        int leasti = 0;
        int least = 50000000;
        for (int l = 0; l < (int)layers.size(); l++) {
            if (layers[l].count[0] <= least) {
                leasti = l;
                least = layers[0].count[0];
            }
        }

        std::cout << leasti << ' ' << least << std::endl;

        aoc::output(doPrint, 2019, 8, 1, layers[leasti].count[1] * layers[leasti].count[2]);
    }

    void day8PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2019, 8, 2, "None");
    }
} // namespace aoc2019