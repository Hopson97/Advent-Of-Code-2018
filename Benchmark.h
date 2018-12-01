#pragma once

#include <chrono>
#include <iostream>
#include <cstdint>
#include <iomanip>
#include <vector>
#include <algorithm>

using Clock = std::chrono::high_resolution_clock;
using MS    = std::chrono::milliseconds;
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
    std::cout << "Times repeated:   " << repeats << '\n';
    std::cout << "Total time:       " << total << "ms\n";
    std::cout << "Average time:     " << float(total) / float(repeats) << "ms\n";
    std::cout << "Minimum time:     " << *std::min_element(times.cbegin(), times.cend()) << "ms\n";
    std::cout << "Maximum time:     " << *std::max_element(times.cbegin(), times.cend()) << "ms\n";
}