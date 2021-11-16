#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>

template <typename T>
class BlockingQueue
{
private:
    std::queue<T> que_;
    std::mutex mtx_;
    int maxSize_{0};
    std::condition_variable condition_;

public:
    BlockingQueue(){};
    BlockingQueue(int size)
    {
        maxSize_ = size;
    }
    int getSize()
    {
        std::unique_lock<std::mutex> unqlck(mtx_);
        return this->que_.size();
    }
    void push(T item)
    {
        std::unique_lock<std::mutex> unqlck(mtx_);
        condition_.wait(unqlck, [this]()
                        { return (static_cast<int>(this->que_.size()) < this->maxSize_); });
        this->que_.push(item);
        unqlck.unlock();
        condition_.notify_one();
    }

    T front()
    {
        std::unique_lock<std::mutex> unqlck(mtx_);
        condition_.wait(unqlck,[this](){ return que_.size() != 0;});
        return this->que_.front();
    }

    void pop()
    {
        std::unique_lock<std::mutex> unqlck(mtx_);
        condition_.wait(unqlck, [this]()
                        { return (static_cast<int>(this->que_.size()) != 0); });
        this->que_.pop();
        unqlck.unlock();
        condition_.notify_one();
    }
    ~BlockingQueue(){};
};

int main()
{
    BlockingQueue<int> que(5);
    std::thread producerThread([&]()
                               {
                                   for (int i = 0; i < 10; ++i)
                                   {
                                       std::cout << "pushing.. " << i << std::endl;
                                       que.push(i);
                                   }
                               });
    std::thread consumerThread([&]()
                               {
                                   for (int i = 0; i < 10; ++i)
                                   {
                                       auto out = que.front();
                                       que.pop();
                                       std::cout << "Pop : " << out << std::endl;
                                   }
                               });

    consumerThread.join();
    producerThread.join();
    return 0;
}