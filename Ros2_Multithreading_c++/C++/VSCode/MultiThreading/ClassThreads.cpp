#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

class Test
{
public:
    Test(){};
    void operator()(std::mutex &m)
    {
        for (size_t i = 0; i < 100; ++i)
        {
            std::unique_lock<std::mutex> unqlock(m);
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::cout << " Hi : " << i << std::endl;
        }
    }
    ~Test(){};
};

int main()
{
    Test t;
    std::mutex m;
    std::thread t1(t, std::ref(m));
    std::thread t2(t, std::ref(m));
    t1.join();
    t2.join();
    return 0;
}