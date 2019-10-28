#pragma once

#include <chrono>
#include <iostream>
#include <cstdint>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>


template<int N>
class Benchmark {
    using Clock = std::chrono::high_resolution_clock;
    using TimeUnit    = std::chrono::microseconds;
    using UnitType  = std::int64_t;
    public:
        template <typename F, typename... Args>
        Benchmark(const char* name, F function, Args... args)
        :   m_name(name) 
        { 
            UnitType total = 0;
            std::array<UnitType, N> times;

            for (int i = 0; i < N; i++) {
                auto begin = Clock::now();
                function(std::forward<Args>(args)...);
                auto end = Clock::now();
                auto time = end - begin;
                auto ms = std::chrono::duration_cast<TimeUnit>(time);
                total += ms.count();
                times[i] = ms.count();
            }
            m_totalTime = total;
            m_avgTime   = (float(total) / float(N));
            m_minTime   = (*std::min_element(times.cbegin(), times.cend()));
            m_maxTime   = (*std::max_element(times.cbegin(), times.cend()));
        }


        void outputTimes() {
            std::cout << "\n==================================\n";
            std::cout << "Results for benchmark: "  << m_name       << '\n';
            std::cout << "Times benchmarked: "      << N      << "\n\n";
            std::cout << "  Total time: "           << m_totalTime  << "ms\n";
            std::cout << "Average time: "           << m_avgTime / 1000.0    << "ms\n";
            std::cout << "Minimum time: "           << m_minTime / 1000.0   << "ms\n";
            std::cout << "Maximum time: "           << m_maxTime / 1000.0   << "ms\n";
            std::cout << "       Range: "           << (m_maxTime - m_minTime) / 1000.0 << "ms\n";
            std::cout << "==================================\n";
        }
    private:

        const char* m_name;
        double m_totalTime;
        double m_avgTime;
        double m_minTime;
        double m_maxTime;
};

template<typename F>
void benchmark(const char* name, F f) {
    Benchmark<100> bm(name, f);
    bm.outputTimes();
}

template<typename F>
void benchmark(const char* partOne, F partOneFunction, const char* partTwo, F partTwoFunction) {
    Benchmark<100> partOneBenchmark(partOne, partOneFunction);
    Benchmark<100> partTwoBenchmark(partTwo, partTwoFunction);
    Benchmark<100> allBenchmark("All", [partOneFunction, partTwoFunction]{
        partOneFunction(); 
        partTwoFunction();
    });
    partOneBenchmark.outputTimes();
    partTwoBenchmark.outputTimes();
    allBenchmark .outputTimes();
}