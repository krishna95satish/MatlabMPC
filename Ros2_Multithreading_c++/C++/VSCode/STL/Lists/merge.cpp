#include <iostream>
#include <list>

using namespace std;

bool order(int val1, int val2)
{
    return (val2 > val1);
}

int main()
{
    list<int> l1, l2;
    l1.push_back(0);
    l1.push_back(10);
    l1.push_back(100);
    l1.push_back(1000);

    l2.push_back(5);
    l2.push_back(55);
    l2.push_back(555);
    l2.push_back(5555);

    l1.merge(l2, order);

    for (auto i : l1)
    {
        cout << "First : " << i << endl;
    }

    for (auto i : l2)
    {
        cout << "Second : " << i << endl;
    }
    return 0;
}