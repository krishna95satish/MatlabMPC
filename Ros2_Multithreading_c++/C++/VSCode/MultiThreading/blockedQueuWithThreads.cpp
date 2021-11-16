#include <iostream>
#include <thread>
#include <queue>
#include <condition_variable>
#include <future>
#include <mutex>
#include <cmath>

std::mutex g_mtx;

template <typename T>
class BlockingQueue
{
private:
    std::queue<T> que_;
    uint maxSize_{0};
    std::mutex mtx_;
    std::condition_variable condition;

public:
    BlockingQueue(){};
    BlockingQueue(int maxSize) : maxSize_(maxSize){};
    void push(T item)
    {
        // Do the pushing
        std::unique_lock<std::mutex> lock(mtx_);
        condition.wait(lock, [this]()
                       { return (que_.size() < this->maxSize_); });

        que_.push(item);
        lock.unlock();
        condition.notify_one();
    }
    void pop()
    {
        // Do the popping
        std::unique_lock<std::mutex> lock(mtx_);
        condition.wait(lock, [this]()
                       { return (que_.size() != 0); });
        que_.pop();
        lock.unlock();
        condition.notify_one();
    }
    T front()
    {
        // Return the values at the front of the queue
        std::unique_lock<std::mutex> lock(mtx_);
        condition.wait(lock, [this]()
                       { return (que_.size() != 0); });
        auto out = que_.front();
        lock.unlock();
        condition.notify_one();
        return out;
    }
    int getSize()
    {
        std::lock_guard<std::mutex> lock(mtx_);
        return this->maxSize_;
    }
};

int something(int id)
{
    std::unique_lock<std::mutex> lock(g_mtx);
    std::cout << "Starting " << id << std::endl;
    lock.unlock();
    int duration = (std::rand() / RAND_MAX) * 5;
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    return id * 10;
}

int main()
{
    BlockingQueue<std::shared_future<int>> futures(3);

    std::thread t([&]()
                  {
                      for (int i = 0; i < 20; i++)
                      {
                          std::shared_future<int> f = std::async(std::launch::async, something, i);
                          futures.push(f);
                      }
                  });

    for (int i = 0; i < 20; i++)
    {
        std::shared_future<int> f = futures.front();
        int value = f.get();
        futures.pop();
        std::cout << "Returned: " << value << std::endl;
    }

    t.join();

    return 0;
}