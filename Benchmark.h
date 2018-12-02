#pragma once

#include <chrono>
#include <iostream>
#include <cstdint>
#include <iomanip>
#include <vector>
#include <algorithm>

using Clock = std::chrono::high_resolution_clock;
using MS    = std::chrono::microseconds;
using N     = std::int64_t;

template <typename F>
void benchmark(N repeats, F function) {
    N total = 0;
    std::vector<N> times(repeats);
    for (int i = 0; i < repeats; i++) {
        auto begin = Clock::now();
        function();
        auto end = Clock::now();
        auto time = end - begin;
        auto ms = std::chrono::duration_cast<MS>(time);
        total += ms.count();
        times[i] = ms.count();
    }
    double totalTime = total / 1000.0;
    double avgTime   = (float(total) / float(repeats)) / 1000.0;
    double minTime   = (*std::min_element(times.cbegin(), times.cend())) / 1000.0;
    double maxTime   = (*std::max_element(times.cbegin(), times.cend())) / 1000.0;
    std::cout << "\nTimes benchmarked: " << repeats       << '\n';
    std::cout << "       Total time: " << totalTime     << "ms\n";
    std::cout << "     Average time: " << avgTime       << "ms\n";
    std::cout << "     Minimum time: " << minTime       << "ms\n";
    std::cout << "     Maximum time: " << maxTime       << "ms\n";
}