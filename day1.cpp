//https://adventofcode.com/2018/day/1

#include <iostream>
#include <fstream>

int main() {
    int freq = 0;
    std::fstream inFile("day1inp.txt");
    std::string line;
    while(std::getline(inFile, line)) {
        switch(line[0]) {
            case '+':
                freq += std::stoi(line.substr(1, line.length() - 1));
                break;
            case '-':
                freq -= std::stoi(line.substr(1, line.length() - 1));
                break;
            default:
                break;                
        }
    }
    std::cout << freq << '\n';
}

