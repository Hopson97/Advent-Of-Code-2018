#include <iostream>
#include <array>

#include "utils/benchmark.h"
#include "2018/aoc2018.h"

int main(int argc, char** argv) {
    if (argc < 3) {
        
    }
    std::cout << argv[0] << " " << argv[1] << argv[2];
}

/*
int main() {
    Benchmark<100> p1bm("Part 1", &partOne);
    Benchmark<100> p2bm("Part 2", &partTwo);
    Benchmark<100> bbm("Part 1 + Part 2", []{
        partOne(); 
        partTwo();
    });
    p1bm.outputTimes();
    p2bm.outputTimes();
    bbm .outputTimes();
}
*/