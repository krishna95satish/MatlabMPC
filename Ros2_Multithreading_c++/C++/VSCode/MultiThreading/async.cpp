#include <iostream>
#include <thread>
#include <future>
#include <chrono>

int add(int a, int b)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    return (a + b);
}

int main()
{
    std::packaged_task<int(int, int)> task(add);
    std::thread t1(std::ref(task), 10, 20);
    auto f3 = task.get_future();
    auto f1 = std::async(std::launch::async, add, 1, 0);
    auto f2 = std::async(std::launch::async, add, 1, 1);
    std::cout << "from pkg task out is : " << f3.get() << std::endl;
    std::cout << "output is : " << f1.get() << std::endl;
    std::cout << "output is : " << f2.get() << std::endl;
    t1.join();
    return 0;
}