#include <iostream>

using namespace std;

int main()
{
    int a{0};
    [a]() mutable
    {
        a = 100;
        cout << a << endl;
    }();
    cout << "after a : " << a << endl;
    return 0;
}