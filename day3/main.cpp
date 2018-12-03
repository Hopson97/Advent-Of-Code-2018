#include <fstream>
#include <cstring>
#include <iostream>
#include <cmath>
#include "../Benchmark.h"

constexpr unsigned ARR_SIZE = 1000;
using Grid = std::array<uint16_t, ARR_SIZE * ARR_SIZE>;

struct Claim {
    Claim(uint16_t x, uint16_t y, uint8_t w, uint8_t h) 
    :   x(x)
    ,   y(y)
    ,   width(w)
    ,   height(h)
    {
        claimId = id++;
    }
    uint16_t x, y, claimId;
    uint8_t width, height;
    static uint16_t id;
};
uint16_t Claim::id = 1;

Claim parseLine(const char* line, int id) {
    const char* data = line + 5 + (int)std::log10(id); 
    size_t  locationComma   = 0, 
            locationColon   = 0, 
            locationX       = 0,
            length          = std::strlen(data);
    for (size_t i = 0; i < length; i++) {
        char x = data[i];
        switch (x) {
            case ',': locationComma = i; break;
            case ':': locationColon = i; break;
            case 'x': locationX = i; break;
            default : break;
        }
    }
    std::string_view xs(data,                       locationComma);
    std::string_view ys(data + locationComma + 1,   locationColon - locationComma - 2);
    std::string_view hs(data + locationColon + 2,   locationX - locationColon);
    std::string_view ws(data + locationX + 1,       length - locationX);
    return {
        std::stoul(xs.data()),
        std::stoul(ys.data()),
        std::stoul(hs.data()),
        std::stoul(ws.data()),
    };
}

int countOverlaps(const Grid& grid) {
    int count = 0;
    for (auto square : grid) {
        if (square > 1) {
            count++;
        }
    }
    return count;
}

int findNonoverlapId(const Grid& grid, const std::vector<Claim>& claims) {
    bool found = false;
    int id = 0;
    for (auto& claim : claims) {
        [&]{
            for (int y = claim.y; y < claim.y + claim.height; y++) {
                for (int x = claim.x; x < claim.x + claim.width; x++) {
                    if (grid[y * ARR_SIZE + x] != 1) {
                        return;
                    }
                }
            }
            id = claim.claimId;
            found = true;
        }();
        if (found) return id;
    }
    return -1;
}


void day3() {
    Claim::id = 1;
    Grid grid;
    grid.fill(0);
    std::ifstream inFile ("input.txt");
    std::string line;
    std::vector<Claim> claims;
    while (std::getline(inFile, line)) {
        auto& claim = claims.emplace_back(parseLine(line.c_str(), Claim::id));
        for (int y = claim.y; y < claim.y + claim.height; y++) {
            for (int x = claim.x; x < claim.x + claim.width; x++) {
                grid[y * ARR_SIZE + x]++;
            }
        }
    }

    std::cout << countOverlaps(grid) << '\n';
    std::cout << findNonoverlapId(grid, claims) << '\n';
}


int main() {
    std::vector<Benchmark<1000>> benchmarks = {
        {"Day 3", &day3},
    };

    for (auto& bm : benchmarks) {
        bm.outputTimes();
    }
}