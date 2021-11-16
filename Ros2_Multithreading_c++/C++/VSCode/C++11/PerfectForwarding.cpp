#include <iostream>

using namespace std;

void test(int &i)
{
    cout << "Lvalue" << endl;
    cout << i << endl;
}

void test(int &&i)
{
    cout << "Rvalue" << endl;
    cout << i << endl;
}

template <typename T>
void call(T &&val)
{
    test(forward<T>(val));
}

int main()
{
    int a{100};
    auto &&b = a;
    call(100);
    return 0;
}