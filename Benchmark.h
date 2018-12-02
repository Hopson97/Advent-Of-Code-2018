#pragma once

#include <chrono>
#include <iostream>
#include <cstdint>
#include <iomanip>
#include <vector>
#include <algorithm>


template<int N>
class Benchmark {
    using Clock = std::chrono::high_resolution_clock;
    using MS    = std::chrono::microseconds;
    using Type  = std::int64_t;
    public:
        Benchmark(const char* name)
        :m_name(name) 
        { }

        template <typename F, typename... Args>
        void benchmark(F function, Args... args) {
            Type total = 0;
            std::array<Type, N> times(repeats);
            for (int i = 0; i < repeats; i++) {
                auto begin = Clock::now();
                function(std::forward<Args>(args)...);
                auto end = Clock::now();
                auto time = end - begin;
                auto ms = std::chrono::duration_cast<MS>(time);
                total += ms.count();
                times[i] = ms.count();
            }
            m_totalTime = total / 1000.0;
            m_avgTime   = (float(total) / float(repeats)) / 1000.0;
            m_minTime   = (*std::min_element(times.cbegin(), times.cend())) / 1000.0;
            m_maxTime   = (*std::max_element(times.cbegin(), times.cend())) / 1000.0;
        }

        void outputTimes() {
            std::cout << "\n==================================\n";
            std::cout << "Results for benchmark: "  << m_name       << '\n';
            std::cout << "Times benchmarked: "      << repeats      << "\n\n";
            std::cout << "  Total time: "           << m_totalTime  << "ms\n";
            std::cout << "Average time: "           << m_avgTime    << "ms\n";
            std::cout << "Minimum time: "           << m_minTime    << "ms\n";
            std::cout << "Maximum time: "           << m_maxTime    << "ms\n";
        }
    private:
        const char* m_name;
        double m_totalTime;
        double m_avgTime;
        double m_minTime;
        double m_maxTime;
}