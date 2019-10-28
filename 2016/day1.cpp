#include "aoc2016.h"

// https://adventofcode.com/2016/day/1

namespace {
    const char *INPUT_PATH = "2016/inputs/day1.txt";

    struct Vector2 {
        int x = 0;
        int y = 0;
    };

    struct Step {
        char direction;
        int amount;
    };

    Step getStep(std::string line) 
    {
        int start = line[0] == ' ' ? 1 : 0;
        Step step;
        step.direction = line[start];
        std::string_view view()
    }
} // namespace

void Day1::partOne()
{
    int dir = 0;
    Vector2 position;
    std::ifstream inFile(INPUT_PATH);
    std::string line;
    while (std::getline(inFile, line, ',')) {
        Step step = line[0] == ' ' ? Step{line[1], line[2] - '0'}
                                   : Step{line[0], line[1] - '0'};

        if (step.direction == 'L') 
            dir--;
        else 
            dir++;
        
        if (dir == -1) dir = 3;
        if (dir == 4) dir = 0;



        switch (dir) {
            case 0:
                position.y += step.amount;
                break;

            case 1:
                position.x += step.amount;
                break;

            case 2:
                position.y -= step.amount;
                break;

            case 3:
                position.x -= step.amount;
                break;

            default:
                std::cout << "NO" << std::endl;
                break;
        }

        std::cout << "Step " << step.direction << " " << step.amount << '\n';
        std::cout << "X: " << position.x << " Y: " << position.y << std::endl << std::endl;
    }
    output(1, abs(position.x) + abs(position.y));
}

void Day1::partTwo()
{
    std::ifstream inFile(INPUT_PATH);
    output(1, 0);
}
