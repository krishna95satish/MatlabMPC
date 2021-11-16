#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

void work(int Iter, std::mutex &m)
{
    for (int i = 0; i < Iter; ++i)
    {
        std::unique_lock<std::mutex> lkg(m);
        // std::lock_guard<std::mutex> lckguard(m);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout << i << std::endl;
    }
}

int main()
{
    std::mutex m;
    std::thread t1(work, 1000, std::ref(m));
    t1.join();
    return 0;
}