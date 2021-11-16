// Calculte PI
#include <iostream>
#include <thread>
#include <iomanip>
#include <functional>
#include <future>

double calculatePI(long precesion, double &out, std::promise<double>& p)
{
    double sum{0.0};
    int sign{1};
    for (long i = 1; i < precesion; i = i + 2, sign *= -1)
    {
        sum += sign * (1.0 / i);
    }
    out = sum * 4;
    p.set_value(out);
    return out;
}

int main()
{
    std::promise<double> prms;
    std::future<double> f;
    double output;
    std::thread t1(calculatePI, 10000, std::ref(output), std::ref(prms));

    f = prms.get_future();
    std::cout << std::setprecision(20) << "The PI is : " << output << std::endl;
    // With future
    std::cout << std::setprecision(20) << "The val of PI is : " << f.get() << std::endl;
    t1.join();

    return 0;
}