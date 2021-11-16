#include <iostream>
#include <thread>
#include <future>
#include <mutex>

bool isEqual(int a, int b, std::mutex &m)
{
    if (a == 0 && b == 0)
    {
        throw std::runtime_error("Both are zero!");
    }
    std::unique_lock<std::mutex> unq(m);
    return (a == b);
}

int main()
{
    std::mutex m;
    std::promise<bool> p;
    std::future<bool> f, f2;
    auto lam_fun = [&](int a, int b, std::mutex &m)
    {
        try
        {
            auto out = isEqual(a, b, m);
            p.set_value(out);
        }
        catch (const std::exception &e)
        {
            p.set_exception(std::current_exception());
            std::cerr << e.what() << '\n';
        }
    };
    std::thread t1(lam_fun, 0, 0, std::ref(m));
    f = p.get_future();
    try
    {
        bool out = f.get();
        std::cout << "The out is : " << out << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    // use package_task for simple use
    std::packaged_task<bool(int, int, std::mutex&)> pckTask(isEqual);

    std::thread t2(std::ref(pckTask), 0, 0, std::ref(m));
    f2 = pckTask.get_future();
    try
    {
        auto out = f2.get();
        std::cout << out << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    t2.join();
    t1.join();

    return 0;
}