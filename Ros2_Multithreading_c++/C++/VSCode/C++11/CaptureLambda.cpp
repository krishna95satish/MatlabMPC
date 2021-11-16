#include <iostream>

using namespace std;

auto gAdd = [](int a, int b){ return (a+b);};
auto gDivide = [](double a, double b) -> double { 
    if (b == 0) {
        return 0;
    } 
    return (a/b);
};

int main()
{
    cout << gAdd(1,3) << endl;
    cout << gDivide(1, 1.2) << endl;
    return 0;
}