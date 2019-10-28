#include "aoc2018.h"

/*
    Solution for Advent of Code 2018 day 10
    https://adventofcode.com/2018/day/10
*/

namespace {
    const char *INPUT_PATH = "2018/inputs/day10.txt";
    struct Point {
        int x, y, vx, vy;
    };

    Point parseLine(const std::string &line)
    {
        int locca = 0;
        int loccb = 0;
        int locabl = 0;
        int locabr = 0;
        for (int i = 0; i < (int)line.length(); i++) {
            if (line[i] == ',') {
                if (locca != 0)
                    loccb = i;
                else
                    locca = i;
            }
            else if (line[i] == '<')
                locabr = i;
            else if (line[i] == '>' && locabl == 0)
                locabl = i;
        }

        std::string x = line.substr(10, locca - 8);
        std::string y = line.substr(locca + 2, locabl - locca - 2);
        std::string vx = line.substr(locabr + 1, loccb - locabr - 1);
        std::string vy = line.substr(loccb + 2, line.length() - loccb - 3);

        return {
            std::stoi(x) / 1000 + 50,
            std::stoi(y) / 1000 + 50,
            std::stoi(vx),
            std::stoi(vy),
        };
    }

    auto parseFile()
    {
        std::vector<Point> points;
        std::string line;
        std::fstream inFile("input.txt");
        while (std::getline(inFile, line)) {
            points.push_back(parseLine(line));
        }

        for (int i = 0; i < (int)points.size(); i++) {
            auto &p = points[i];
            std::cout << (i + 1) << " "
                      << "X: " << p.x << " Y: " << p.y << " VX: " << p.vx
                      << " VY: " << p.vy << '\n';
        }

        return points;
    }

    constexpr int size = 120;
} // namespace

namespace aoc2018 {
    void day10PartOne(bool doPrint)
    {
        auto points = parseFile();

        std::array<char, size * size> grid;
        while (true) {
            grid.fill('.');
            for (auto &p : points) {
                grid[(p.y) * size + (p.x)] = '#';
                p.x += p.vx;
                p.y += p.vy;
            }
            for (int y = 0; y < size; y++) {
                for (int x = 0; x < size; x++) {
                    std::cout << grid[y * size + x] << " ";
                }
                std::cout << '\n';
            }
            std::cout << "Again?";
            std::cin.ignore();
        }
        aoc::output(doPrint, 2018, 10, 1, "None");
    }

    void day10PartTwo(bool doPrint)
    {
        std::ifstream inFile(INPUT_PATH);
        aoc::output(doPrint, 2018, 10, 2, "None");
    }
} // namespace aoc2018