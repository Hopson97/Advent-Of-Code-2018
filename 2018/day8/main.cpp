#include "../Benchmark.h"
#include <fstream>
#include <iostream>
#include <memory>
#include <unordered_map>

struct Node {
    std::vector<Node> children;
    std::vector<int> metaData;
};

using NodePtr = std::unique_ptr<Node>;

void parse(std::ifstream &inFile, NodePtr &root)
{
    int children;
    int nMetaData;
    if (!(inFile >> children >> nMetaData)) {
        return;
    }
    if (children == 0) {
        for (int i = 0; i < nMetaData; i++) {
            int n;
            inFile >> n;
            root->metaData.push_back(n);
        }
        return;
    }
    else {
    }
}

void partOne()
{
    std::ifstream inFile("eg.txt");
    int children;
    int nMetaData;

    auto root = std::make_unique<Node>();
    parse(inFile, root);
}

void partTwo() {}

int main() { Benchmark<100>("Part 1", &partOne).outputTimes(); }