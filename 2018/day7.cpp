#include "aoc2018.h"

using Vertices = std::array<std::pair<int, std::vector<int>>, 26>;

struct Graph {
    std::set<int> startPoints;
    Vertices vertices;
};

Graph readFile()
{
    std::ifstream inFile("input.txt");
    std::string line;
    Vertices vertices;
    std::set<int> beginFinder;
    for (size_t i = 0; i < 26; i++) {
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

void partOne()
{
    auto graph = readFile();
    std::string result;
    result.reserve(32);
    auto current = graph.startPoints.begin();
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
}

void partTwo() {}
