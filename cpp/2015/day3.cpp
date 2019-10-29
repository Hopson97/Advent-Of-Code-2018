#include "aoc2015.h"

#include <aoc/file_io.h>
#include <aoc/maths.h>

/*
    Solution for Advent of Code 2015 day 3
    https://adventofcode.com/2015/day/3
*/

namespace {
    const char *INPUT_PATH = "2015/inputs/day3.txt";

    using Position = aoc::maths::Vector2<u16>;

    void makeMove(Position &location, char move)
    {
        // clang-format off
            switch (move) {
                case 'v': location.y++; break;
                case '<': location.x--; break;
                case '>': location.x++; break;
                case '^': location.y--; break;
                default: break;
            }
        // clang-format on
    }

    bool tryInsert(aoc::maths::VectorSet<u16> &visited, const Position &pos)
    {
        if (visited.find(pos) == visited.cend()) {
            visited.insert(pos);
            return true;
        }
        return false;
    }

} // namespace

namespace aoc2015 {
    void day3PartOne(bool doPrint)
    {
        auto input = aoc::file_io::readAsLine(INPUT_PATH);

        aoc::maths::VectorSet<u16> visited;
        Position santa;
        int houses = 0;
        for (auto c : input) {
            makeMove(santa, c);
            if (tryInsert(visited, santa)) {
                houses++;
            }
        }

        aoc::output(doPrint, 2015, 3, 1, houses);
    }

    void day3PartTwo(bool doPrint)
    {
        auto input = aoc::file_io::readAsLine(INPUT_PATH);
        aoc::maths::VectorSet<u16> visited;
        Position santa;
        Position robot;

        int turn = 0;
        int houses = 0;
        for (auto c : input) {
            if (turn++ % 2 == 0) {
                makeMove(santa, c);
                if (tryInsert(visited, santa)) {
                    houses++;
                }
            }
            else {
                makeMove(robot, c);
                if (tryInsert(visited, robot)) {
                    houses++;
                }
            }
        }

        aoc::output(doPrint, 2015, 3, 2, houses);
    }
} // namespace aoc2015