#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

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

int main()
{
    blockedBuff<int> b(5);
    std::thread producer([&]()
                         {
                             for (int i = 0; i < 10; ++i)
                             {
                                 std::cout << "pushing " << i << std::endl;
                                 b.push(i);
                                 std::cout << "Size is : " << b.getSize() << std::endl;
                             }
                         });

    std::thread consumer([&]()
                         {
                             for (int i = 0; i < 10; ++i)
                             {
                                 auto out = b.front();
                                 b.pop();
                                 std::cout << "Consumed " << out << std::endl;
                             }
                         });

    producer.join();
    consumer.join();
    std::cout << "H/W : " << std::thread::hardware_concurrency() << std::endl;
    return 0;
}