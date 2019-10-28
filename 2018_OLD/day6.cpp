#include "aoc2018.h"

struct Point {
    int x, y;
};

int dist(int a, int b, int c, int d)
{
    int xd = std::abs(a - c);
    int yd = std::abs(b - d);

    return yd + xd; // xd - yd;
}

void Day6::partOne()
{
    std::ifstream inFile("example.txt");
    std::string line;
    std::vector<int> xs;
    std::vector<int> ys;
    while (std::getline(inFile, line, ',')) {
        int x = std::stoi(line);
        std::getline(inFile, line);
        int y = std::stoi(line);

        xs.push_back(x);
        ys.push_back(y);
    }
    int maxX = *std::max_element(xs.cbegin(), xs.cend());
    int maxY = *std::max_element(ys.cbegin(), ys.cend());
    std::vector<int> area(maxX * maxY);
    std::fill(area.begin(), area.end(), -1);

    for (int y = 0; y < maxY; y++) {
        for (int x = 0; x < maxX; x++) {
            std::vector<int> distances;
            for (size_t i = 0; i < xs.size(); i++) {
                int d = dist(x, y, xs[i], ys[i]);
                distances.push_back(d);
            }

            int small = 1000;
            int index = 0;
            for (int i = 0; i < distances.size(); i++) {
                if (distances[i] < small) {

                    index = i;
                    small = distances[i];
                    std::cout << small << " ";
                }
            }
            std::cout << '\n';
            bool unique = true;
            for (int i = 0; i < distances.size(); i++) {
                if (i == index)
                    continue;
                if (distances[i] == small) {
                    unique = false;
                    break;
                }
            }
            if (unique) {
                area[y * maxX + x] = index;
            }
        }
    }

    for (int y = 0; y < maxY; y++) {
        for (int x = 0; x < maxX; x++) {
            std::cout << area[y * maxX + x] << " ";
        }
        std::cout << '\n';
    }
}

void Day6::partTwo() {}
