#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 7
    https://adventofcode.com/2018/day/7
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day7.txt";
    using Vertices = std::array<std::pair<int, std::vector<int>>, 26>;

    struct Graph {
        std::set<int> startPoints;
        Vertices vertices;
    };

    Graph readFile()
    {
        std::ifstream inFile(INPUT_PATH);
        std::string line;
        Vertices vertices;
        std::set<int> beginFinder;
        for (std::size_t i = 0; i < 26; i++) {
            vertices[i].first = i;
            beginFinder.insert(i);
        }

        while (std::getline(inFile, line)) {
            int begin = line[5] - 'A';
            int end = line[36] - 'A';

            vertices[begin].second.push_back(end);
            if (beginFinder.find(end) != beginFinder.end()) {
                beginFinder.erase(end);
            }
        }
        for (auto &edge : vertices) {
            std::sort(edge.second.begin(), edge.second.end());
        }

        return {beginFinder, vertices};
    }
} // namespace

namespace aoc2018 {
    void day7PartOne(bool doPrint)
    {
        auto graph = readFile();
        std::string result;
        result.reserve(32);
        // auto current = graph.startPoints.begin();
        std::list<int> queue;
        std::array<bool, 26> visited;
        visited.fill(false);

        queue.push_back(*graph.startPoints.begin());
        for (auto &v : graph.vertices) {
            std::cout << v.first << " -> ";
            for (auto vert : v.second) {
                std::cout << vert << " ";
            }
            std::cout << '\n';
        }

        aoc::output(doPrint, 2018, 7, 1, "None");
    }

    void day7PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 7, 2, "None");
    }
} // namespace aoc2018