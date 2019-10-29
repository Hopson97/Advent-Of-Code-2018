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
        template <typename F>
        Benchmark(const char* name, F function)
        :   m_name(name) 
        { 
            UnitType total = 0;
            std::array<UnitType, N> times;

            std::cout << "___________________________________________\n";
            std::cout << "| Progress                                |\n";
            std::cout << "| 0%                                 100% |\n";
            std::cout << "| ";
            for (int i = 0; i < N; i++) {
                auto begin = Clock::now();
                function();
                auto end = Clock::now();
                auto time = end - begin;
                auto ms = std::chrono::duration_cast<TimeUnit>(time);
                total += ms.count();
                times[i] = ms.count();
                if (i % 5 == 0) {
                    //std::cout << "= ";
                    //std::cout.flush();
                }
            }
            std::cout << "|\n" << std::endl;
            m_totalTime = total;
            m_avgTime   = (float(total) / float(N));
            m_minTime   = (*std::min_element(times.cbegin(), times.cend()));
            m_maxTime   = (*std::max_element(times.cbegin(), times.cend()));
        }


        void outputTimes() {
            std::cout  << 
                "\n\n" <<
                "Results for benchmark: "  << m_name                << '\n' <<
                "Times benchmarked: "      << N                     << "\n\n"<<
                "  Total time: "           << m_totalTime           << " microseconds\n"<<
                "  Total time: "           << m_totalTime / 1000000 << " seconds\n"<<
                "Average time: "           << m_avgTime / 1000.0    << " microseconds\n"<<
                "Minimum time: "           << m_minTime / 1000.0    << " microseconds\n"<<
                "Maximum time: "           << m_maxTime / 1000.0    << " microseconds\n"<<
                "       Range: "           << (m_maxTime - m_minTime) / 1000.0 << " microseconds" << std::endl;
        }
    private:

        const char* m_name;
        double m_totalTime;
        double m_avgTime;
        double m_minTime;
        double m_maxTime;
};

template<int N = 128, typename F>
void benchmark(int year, int day , F partOne, F partTwo) {
    std::cout << "\n\n- - - - - - - - - - - - - - - - - - - - -\n";
    std::cout << "Benchmarking " << year << " day " << day << '\n';
    std::cout << "- - - - - - - - - - - - - - - - - - - - -\n";
 
    std::cout << "Running part 1" << std::endl;
    Benchmark<N> p1Benchmark("Part 1", [&partOne]() {
        partOne(false);
    });

    std::cout << "Running part 2" << std::endl;
    Benchmark<N> p2Benchmark("Part 2", [&partTwo]() {
        partTwo(false);
    });

    std::cout << "Running part 1 and part 2" << std::endl;
    Benchmark<N> allBenchmark("Part 1 + Part 2", [&partOne, &partTwo]{
        partOne(false);
        partTwo(false);
    });

    p1Benchmark.outputTimes();
    p2Benchmark.outputTimes();
    allBenchmark .outputTimes();
}