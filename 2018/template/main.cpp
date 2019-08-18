#include <fstream>
#include <iostream>
#include <unordered_map>
#include "../Benchmark.h"

void partOne() {
    
}

void partTwo() {
    
}

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