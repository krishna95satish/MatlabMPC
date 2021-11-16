#include <iostream>
#include <thread>
#include <future>
#include <iomanip>
#include <exception>
#include <mutex>
#include <vector>
#include <iomanip>
#include <cmath>

double calculatePI(int start, int stop)
{
    double sum{0.0};
    int sign{1};
    for (long i = start + 1; i < stop; i = i + 2, sign *= -1)
    {
        sum += sign * (1.0 / i);
    }
    return sum * 4;
}

int main()
{
    std::vector<std::future<double>> vf;
    double sum{0.0};
    const int CONCURRENCY = std::thread::hardware_concurrency();
    const int PRECESION = 1000;
    int start = 1;
    int stop = int(PRECESION / CONCURRENCY);
    for (int i = 0; i < CONCURRENCY; ++i)
    {
        vf.emplace_back(std::async(std::launch::async, calculatePI, start, stop));
        start = stop + 1;
        stop = start + stop;
    }
    for (auto &i : vf)
    {
        auto test = i.get();
        std::cout << "Single : " <<  test << std::endl;
        sum = sum + test;
    }
    std::cout << std::setprecision(20) << M_PI << std::endl;
    std::cout << std::setprecision(20) << sum << std::endl;

    return 0;
}