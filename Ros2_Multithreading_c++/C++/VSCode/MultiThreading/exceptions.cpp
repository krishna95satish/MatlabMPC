#include <iostream>
#include <thread>
#include <future>
#include <iomanip>
#include <exception>
#include <mutex>

double calculatePI(long precesion, std::mutex &m)
{
    if (precesion < 0)
    {
        throw std::runtime_error("Prec is less than Zero! NOT ALLOWED!");
    }
    double sum{0.0};
    int sign{1};
    std::unique_lock<std::mutex> unq_lck(m);
    for (long i = 1; i < precesion; i = i + 2, sign *= -1)
    {
        sum += sign * (1.0 / i);
    }
    
    return sum * 4;
}

int main()
{
    std::promise<double> p;
    std::future<double> f;
    std::mutex m;
    auto lam_fun = [&](long prec, std::mutex &m)
    {
        try
        {
            p.set_value(calculatePI(prec, m));
        }
        catch (std::exception &err)
        {
            p.set_exception(std::current_exception());
            std::cout << err.what() << std::endl;
        }
    };
    std::thread t1(lam_fun, 100, std::ref(m));
    f = p.get_future();

    try
    {
        std::cout << std::setprecision(10) << "The PI is : " << f.get() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    t1.join();
    return 0;
}