#include <iostream>
#include <initializer_list>

class Test
{
private:
    /* data */
public:
    Test() = default;
    Test(const Test &other) = default;
    Test &operator=(const Test &other) = default;
    Test(std::initializer_list<int> l);
    ~Test();
};

Test::Test(std::initializer_list<int> l)
{
    for (auto i : l)
    {
        std::cout << i << std::endl;
    }
}

Test::~Test()
{
}

int main(int argc, char **argv)
{
    Test t1, t2;
    Test t3 = t1;

    return 0;
}