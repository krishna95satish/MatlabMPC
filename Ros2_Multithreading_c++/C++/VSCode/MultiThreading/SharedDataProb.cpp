#include <iostream>
#include <thread>
#include <atomic>


int main()
{
    const int ITRERATION{1000};
    std::atomic<int> counter{0};
    std::thread t1([&](){
        for(int i = 0; i< ITRERATION ; ++i) {
            ++counter;
        }
    }
    );

       std::thread t2([&](){
        for(int i = 0; i< ITRERATION ; ++i) {
            ++counter;
        }
    }
    );
    
    t1.join();
    t2.join();
    std::cout << "The counter is : " << counter << std::endl;
    return 0;
}