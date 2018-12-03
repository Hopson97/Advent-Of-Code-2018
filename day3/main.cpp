#include <fstream>
#include <cstring>
#include <iostream>
#include <cmath>
#include "../Benchmark.h"

struct Claim {
    Claim(int x, int y, int w, int h) 
    :   x(x)
    ,   y(y)
    ,   width(w)
    ,   height(h)
    {
        claimId = id++;
    }
    int x, y, width, height, claimId;
    static int id;
};
int Claim::id = 1;

Claim parseLine(const char* line, int id) {
    const char* data = line + 5 + (int)std::log10(id);
    size_t  comma = 0, 
            colonSpaceEnd = 0, 
            xloc = 0,
            length = std::strlen(data);
    for (size_t i = 0; i < length; i++) {
        char x = data[i];
        switch (x) {
            case ',':
                comma = i;
                break;
            case ':':
                colonSpaceEnd = i;
                break;
            case 'x':
                xloc = i;
                break;
            default:
                break;
        }
    }
    std::string_view xs(data,                       comma);
    std::string_view ys(data + comma + 1,           colonSpaceEnd - comma - 2);
    std::string_view hs(data + colonSpaceEnd + 2,   xloc - colonSpaceEnd);
    std::string_view ws(data + xloc + 1,            length - xloc);
    return {
        std::stoi(xs.data()),
        std::stoi(ys.data()),
        std::stoi(hs.data()),
        std::stoi(ws.data()),
    };
}



const int size = 1000;
void day3() {
    Claim::id = 1;
    std::array<int, size * size> grid;
    grid.fill(0);
    std::ifstream inFile ("input.txt");
    std::string line;
    std::vector<Claim> claims;
    while (std::getline(inFile, line)) {
        auto& claim = claims.emplace_back(parseLine(line.c_str(), Claim::id));
        for (int y = claim.y; y < claim.y + claim.height; y++) {
            for (int x = claim.x; x < claim.x + claim.width; x++) {
                size_t idx = y * size + x;
                grid[idx]++;
            }
        }
    }

    int count = 0;
    for (auto square : grid) {
        if (square > 1) {
            count++;
        }
    }
    std::cout << count << '\n';

    bool found = false;
    for (auto& claim : claims) {
        [&]{
            for (int y = claim.y; y < claim.y + claim.height; y++) {
                for (int x = claim.x; x < claim.x + claim.width; x++) {
                    if (grid[y * size + x] != 1) {
                        return;
                    }
                }
            }
            std::cout << "ID: " << claim.claimId << '\n';
            found = true;
        }();
    }
    if (found) return;
}


int main() {
    std::vector<Benchmark<10000>> benchmarks = {
        {"Part 1", &day3},
    };

    for (auto& bm : benchmarks) {
        bm.outputTimes();
    }
}