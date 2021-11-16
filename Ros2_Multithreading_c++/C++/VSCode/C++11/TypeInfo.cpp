#include <iostream>
#include <typeinfo>

using namespace std;

int test2()
{
    return 1;
}

auto test(int val) -> decltype(test2())
{
    return val * 10;
}

int main()
{

    string s;
    cout << typeid(s).name() << endl;
    decltype(s) name = "Krishna";
    cout << name << endl;
    cout << test(100) << endl;

    return 0;
}