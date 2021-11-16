#include <iostream>
#include <thread>
#include <future>
#include <condition_variable>
#include <chrono>

int add(int a, int b)
{
    auto sum{0};
    sum = a + b;
    return sum;
}

int main()
{
    std::future<int> f, f2;
    std::condition_variable condtion;
    std::promise<int> p;
    std::mutex mtx;
    bool isDone{false};
    auto lam = [&](int a, int b)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout << "other thread coming!" << std::endl;

        std::unique_lock<std::mutex> unq(mtx);
        std::cout << "other thread locked" << std::endl;
        p.set_value(add(a, b));
        isDone = true;
        unq.unlock();
        std::cout << "other thread unlocked and notifying!" << std::endl;
        condtion.notify_one();
    };

    std::thread addThread(lam, 10, 20);
    f = p.get_future();
    std::cout << "main thread coming!" << std::endl;
    std::unique_lock<std::mutex> unq(mtx);
    std::cout << "main thread waiting! " << std::endl;
    while (!isDone)
    {
        condtion.wait(unq);
    }
    try
    {
        auto out = f.get();
        std::cout << out << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << " continuting ....... " << std::endl;
    std::packaged_task<int(int, int)> task(add);
    std::thread t2(std::ref(task), 10, 40);
    f2 = task.get_future();
    try
    {
        auto out = f2.get();
        std::cout << out << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    addThread.join();
    t2.join();
    return 0;
}