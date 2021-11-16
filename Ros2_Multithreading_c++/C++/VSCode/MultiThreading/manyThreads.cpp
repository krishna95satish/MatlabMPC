#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <vector>
#include <future>

template <typename T>
class blockedBuff
{
private:
    std::queue<T> que_;
    int maxSize{0};
    std::mutex mtx_;
    std::condition_variable condition;

public:
    blockedBuff(){};
    blockedBuff(int maxsize) : maxSize(maxsize){};
    void push(T item)
    {
        std::unique_lock<std::mutex> unqlck(mtx_);
        condition.wait(unqlck, [this]()
                       { return static_cast<int>(que_.size()) < maxSize; });
        que_.push(item);
        unqlck.unlock();
        condition.notify_one();
    }
    void pop()
    {
        std::unique_lock<std::mutex> unqlck(mtx_);
        condition.wait(unqlck, [this]()
                       { return static_cast<int>(que_.size()) != 0; });
        que_.pop();
        unqlck.unlock();
        condition.notify_one();
    }
    T front()
    {
        std::unique_lock<std::mutex> unqlck(mtx_);
        condition.wait(unqlck, [this]()
                       { return que_.size() != 0; });
        return que_.front();
    }
    int getSize()
    {
        std::lock_guard<std::mutex> lckguard(mtx_);
        return que_.size();
    }
};

int add(int a, int b)
{
    std::cout << "adding " << a << " + " << b << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    return (a + b);
}

int main()
{
    std::vector<std::future<int>> futures;
    for (uint i = 0; i < std::thread::hardware_concurrency(); ++i)
    {
        futures.emplace_back(std::async(std::launch::async, add, i, i));
    }
    for (auto &i : futures)
    {
        std::cout << "Output is : " << i.get() << std::endl;
    }
    return 0;
}