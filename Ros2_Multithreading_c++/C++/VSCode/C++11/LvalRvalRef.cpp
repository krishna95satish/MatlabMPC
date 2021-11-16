#include <iostream>
#include <functional>
#include <initializer_list>

auto test(std::function<int(std::initializer_list<int>)> fun, std::initializer_list<int> l) -> int
{
    return fun(l);
}

int add(std::initializer_list<int> l)
{
    int sum = 0;
    for (auto &i : l)
    {
        sum += i;
    }
    return sum;
}

void simple(const int &a)
{
    std::cout << "SimpleL fun : " << a << std::endl;
}

void simple(int &&a)
{
    std::cout << "SimpleR fun : " << a << std::endl;
}

int main()
{
    std::cout << test(add, {1, 2, 3, 4, 5}) << std::endl;
    std::cout << add({1, 2, 3, 4, 5}) << std::endl;
    // int &result = add({1, 2, 4});   // Not possible due to R value reference
    const int &result1 = add({1, 2, 4});
    int &&result2 = add({1, 2, 4});
    // -------------------------------//
    int v = 100;
    simple(v);
    simple(100);
    return 0;
}