#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

class Bind
{
private:
public:
    Bind(){};
    int add(int a, int b)
    {
        return (a + b);
    }
};

int add(int a, int b, int c)
{
    return (a + b + c);
}

int main()
{
    Bind b;
    auto calculate = bind(add, _1, _2, 100);
    auto classCal = bind(&Bind::add, Bind(), _1, _2);
    cout << "from class " << classCal(50, 55) << endl;
    cout << calculate(10, 20) << endl;
    return 0;
}