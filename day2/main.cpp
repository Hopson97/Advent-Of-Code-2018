#include <fstream>
#include <iostream>
#include <unordered_map>

void partOne() {
    std::unordered_map<char, int> charCount;
    std::ifstream inFile("input.txt");
    std::string line;
    int twice = 0;
    int thrice = 0;
    while (std::getline(inFile, line)) {
        for (char c : line) {
            charCount[c]++;
        }
        bool doesAppearTwice = false;
        bool doesAppearThrice = false;
        for (auto& pair : charCount) {
            if (pair.second == 2) {
                doesAppearTwice = true;
            }
            else if (pair.second == 3) {
                doesAppearThrice = true;
            }
        }
        charCount.clear();
        twice += doesAppearTwice;
        thrice += doesAppearThrice;
    }
    std::cout << twice * thrice << '\n';
}

int main() {
    partOne();
}