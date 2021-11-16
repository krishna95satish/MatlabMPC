#include <iostream>
#include <thread>
#include <mutex>

int main()
{
    int ITER{100000};
    int counter{0};
    std::mutex mLock;

    auto lamFun = [&]()
                   {
                       for (int i = 0; i < ITER; ++i)
                       {
                           mLock.lock();
                           ++counter;
                           mLock.unlock();
                       }
                   };

    std::thread t1(lamFun);

    std::thread t2(lamFun);

    t1.join();
    t2.join();
    std::cout << "The count is : " << counter << std::endl;

    return 0;
}