#include "aoc2018.h"

#include <iostream>
#include <array>

#include <benchmark.h>
#include "aoc2018.h"

template<typename F>
void benchmark(const char* name, F f) {
    Benchmark<100> bm(name, f);
    bm.outputTimes();
}

int main() {
    benchmark("Day One Part 1", &day1::partOne);
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