#include <iostream>
#include <thread>
#include <chrono>
#include <condition_variable>
#include <mutex>

int main()
{
    bool ready{false};
    std::condition_variable condition;
    std::mutex mtx;
    auto lam = [&](int iter)
    {
        std::unique_lock<std::mutex> unqlck(mtx);
        for (int i = 0; i < iter; ++i)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::cout << "Hello " << i << std::endl;
        }
        ready = true;
        unqlck.unlock();
        condition.notify_all();
    };

    std::thread t1(lam, 10);
    std::unique_lock<std::mutex> unqlck(mtx);
    while (!ready)
    {
        condition.wait(unqlck);
    }
    std::cout << "i got the lock " << std::endl;
    t1.join();
    return 0;
}