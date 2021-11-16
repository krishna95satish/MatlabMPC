#include <iostream>
#include <functional>

using namespace std;

struct Functional
{
    int operator()(int a, int b)
    {
        return (a + b);
    }
};

int add(int a, int b)
{
    return (a + b);
}

void test(function<int(int, int)> ftest, int a, int b)
{
    cout << ftest(a, b) << endl;
}

auto lam = [](int a, int b) -> int
{
    return (a + b);
};

int main()
{
    test(add, 1, 2);
    cout << " -- " << endl;
    test(Functional(), 3, 5);

    cout << " -- " << endl;
    test(lam, 10, 5);

    return 0;
}