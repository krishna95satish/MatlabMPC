#include <iostream>

using namespace std;

int testFun(int val)
{
    return val * 10;
}

int testMul(int (*ptr)(int))
{
    return (ptr(10) * ptr(10));
}

int main()
{
    cout << testFun(10) << endl;
    auto (*funPtr)(int) = testFun;
    cout << funPtr(20) << endl;
    cout << testMul(funPtr) << endl;

    return 0;
}