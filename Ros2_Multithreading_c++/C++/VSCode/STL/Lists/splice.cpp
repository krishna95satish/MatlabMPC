#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l1, l2;
    l1.push_back(0);
    l1.push_back(1);
    l1.push_back(2);

    l2.push_back(10);
    l2.push_back(11);
    l2.push_back(12);
    l2.push_back(13);
    auto it = l1.begin();
    advance(it, 2);
    l1.splice(it, l2);
    //l1.insert(it, l2.begin(), l2.end());
    for (auto i : l1)
    {
        cout << i << endl;
    }

    return 0;
}