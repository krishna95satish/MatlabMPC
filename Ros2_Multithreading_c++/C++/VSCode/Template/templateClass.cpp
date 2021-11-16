#include <iostream>

using namespace std;

template <class T>
class Test
{
private:
    T val;

public:
    Test(){};
    Test(T val) : val(val){};
    T print()
    {
        return val;
    }
    ~Test(){};
};
int main()
{
    Test<string> t("Krishna");

    cout << t.print() << endl;

    return 0;
}