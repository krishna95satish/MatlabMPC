#include <iostream>
#include <thread>

void add(int a, int b, int &out)
{
    out = a + b;
}

int main()
{
    int output{0};
    std::thread t1(add, 10, 20, std::ref(output));
    t1.join();
    std::cout << output << std::endl;
    return 0;
}