#include "aoc2016.h"

/*
    Solution for Advent of Code 2016 day 1
    https://adventofcode.com/2016/day/1
*/

namespace {
    const char *INPUT_PATH = "2016/inputs/day1.txt";

    struct Vector2 {
        int x = 0;
        int y = 0;
    };

    bool operator==(const Vector2 &left, const Vector2 &right)
    {
        return (left.x == right.x) && (left.y == right.y);
    }

    struct Step {
        char direction;
        int amount;
    };

    Step getStep(std::string line)
    {
        int start = line[0] == ' ' ? 1 : 0;
        Step step;
        step.direction = line[start];
        std::string view(&line[start + 1]);
        step.amount = std::stoi(view);

        return step;
    }

    void doSteps(Step step, Vector2 &position, int &dir,
                 std::vector<Vector2> &visited)
    {
        while (step.amount--) {
            switch (dir) {
                case 0:
                    position.y++;
                    break;

                case 1:
                    position.x++;
                    break;

                case 2:
                    position.y--;
                    break;

                case 3:
                    position.x--;
                    break;

                default:
                    std::cout << "NO" << std::endl;
                    break;
            }
            for (const auto &pos : visited) {
                if (pos == position) {
                    std::cout << "Day 1 part 2 "
                              << abs(position.x) + abs(position.y) << std::endl;
                }
            }
            visited.push_back(position);
        }
    }
} // namespace

namespace aoc2016 {
    void day1PartOne(bool doPrint)
    {
        // Lazy solution, could have used a set but meh
        std::vector<Vector2> visited;

        int dir = 0;
        Vector2 position;
        std::ifstream inFile(INPUT_PATH);
        std::string line;
        while (std::getline(inFile, line, ',')) {
            Step step = getStep(line);

            if (step.direction == 'L')
                dir--;
            else
                dir++;

            if (dir == -1)
                dir = 3;
            if (dir == 4)
                dir = 0;

            doSteps(step, position, dir, visited);
        }

        aoc::output(doPrint, 2016, 1, 1, "None");
    }

    void day1PartTwo(bool doPrint)
    {
        (void)doPrint;
    }
} // namespace aoc2016