#include "aoc2016.h"

//https://adventofcode.com/2016/day/1

namespace {
    const char* INPUT_PATH = "2016/inputs/day1.txt";
} // namespace

void Day1::partOne()
{
    int dir = 0;
    int x = 0;
    int y = 0;
    std::ifstream inFile(INPUT_PATH);
    std::string line;
    while (std::getline(inFile, line, ',')) {
        
        char turn = line[0];
        int amount = line[1] - '0';
        if (line[0] == ' ') {
            turn = line[1];
            amount = line[2] - '0';
        }

        //std::cout << turn << " " << amount << '\n';

        switch (turn)
        {
        case 'L':
            dir--;
            break;
        case 'R':
            dir++;

        default:
            break;
        }

        if (dir == -1) dir = 3;
        if (dir == 4) dir = 0;

        switch (dir)
        {
        case 0:
            y += amount;
            break;
        
        case 1:
            x += amount;
            break;

        case 2:
            y -= amount;
            break;

        case 3:
            x -= amount;
            break;
        
        default:
            std::cout << "NO" << std::endl;
            break;
        }

        
    }
    y = abs(y);
    x = abs(x);
    std::cout << "X Y D " << x << " " << y << " " << dir << '\n';

    output(1, x + y);
}

void Day1::partTwo()
{
    std::ifstream inFile(INPUT_PATH);
    output(1, 0);
}
