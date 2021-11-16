#include <iostream>
#include <functional>
using namespace std::placeholders;

int add(int a, int b)
{
    return (a + b);
}

int main()
{
    add(1, 2);

    auto test = std::bind(add, _1, 10);
    std::cout << test(10) << std::endl;

    return 0;
}