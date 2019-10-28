#include "aoc2018.h"

#include <util.h>

namespace {
    constexpr unsigned ARR_SIZE = 1000;
    using Grid = std::array<u16, ARR_SIZE * ARR_SIZE>;

    struct Claim {
        Claim(u16 x, u16 y, u8 w, u8 h)
            : x(x)
            , y(y)
            , width(w)
            , height(h)
        {
            claimId = id++;
        }
        u16 x, y, claimId;
        u8 width, height;
        static u16 id;
    };
    u16 Claim::id = 1;

    Claim parseLine(const char *line, int id)
    {
        const char *data = line + 5 + (int)std::log10(id);
        std::size_t locationComma = 0, locationColon = 0, locationX = 0,
                    length = std::strlen(data);
        for (std::size_t i = 0; i < length; i++) {
            char x = data[i];
            switch (x) {
                case ',':
                    locationComma = i;
                    break;
                case ':':
                    locationColon = i;
                    break;
                case 'x':
                    locationX = i;
                    break;
                default:
                    break;
            }
        }
        std::string_view xs(data, locationComma);
        std::string_view ys(data + locationComma + 1,
                            locationColon - locationComma - 2);
        std::string_view hs(data + locationColon + 2,
                            locationX - locationColon);
        std::string_view ws(data + locationX + 1, length - locationX);
        return {
            toU16(std::stoul(xs.data())),
            toU16(std::stoul(ys.data())),
            toU8(std::stoul(hs.data())),
            toU8(std::stoul(ws.data())),
        };
    }

    int countOverlaps(const Grid &grid)
    {
        int count = 0;
        for (auto square : grid) {
            if (square > 1) {
                count++;
            }
        }
        return count;
    }

    int findNonoverlapId(const Grid &grid, const std::vector<Claim> &claims)
    {
        bool found = false;
        int id = 0;
        for (auto &claim : claims) {
            [&] {
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
            if (found)
                return id;
        }
        return -1;
    }

} // namespace

namespace day3 {
    void partOne()
    {
        Claim::id = 1;
        Grid grid;
        grid.fill(0);
        std::ifstream inFile("inputs/day3_big.txt");
        std::string line;
        std::vector<Claim> claims;
        while (std::getline(inFile, line)) {
            auto &claim =
                claims.emplace_back(parseLine(line.c_str(), Claim::id));
            for (int y = claim.y; y < claim.y + claim.height; y++) {
                for (int x = claim.x; x < claim.x + claim.width; x++) {
                    grid[y * ARR_SIZE + x]++;
                }
            }
        }

        auto overlaps = countOverlaps(grid);
        auto nonoverlapid = findNonoverlapId(grid, claims);

        std::printf("%d %d", overlaps, nonoverlapid);
    }
} // namespace day3