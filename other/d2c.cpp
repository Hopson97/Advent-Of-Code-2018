#include <iostream>
#include <vector>
#include <fstream>
#include <unordered_set>
#include <algorithm>

#include "../Benchmark.h"


std::string ciaran(const std::vector<std::string>& input){
    std::unordered_set<std::string> v;
    std::string n;
    char a;
    for(const auto& s : input){
        n = s;
        for(size_t i = 0; i < s.length(); ++i){
            a = n[i];
            n[i] = '_';
            if (!v.emplace(n).second){
                n.erase(std::remove(n.begin(), n.end(), '_'), n.end());
                return n;
            }
            n[i] = a;
        }
    }
}

int main()
{
    Benchmark<5> bm("Ciaran", [&]{
        std::ifstream file ("huge_input.txt");
        std::vector<std::string> input;
        std::string s;

        while(file>>s)
        {
            input.push_back(s);
        }

        std::cout << ciaran(input) << '\n';
    });
    bm.outputTimes();
}