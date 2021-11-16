#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    l.emplace_front(5);
    l.emplace_front(4);
    l.emplace_front(3);
    l.emplace_front(2);
    l.emplace_front(1);
    l.emplace_front(0);

    auto it = l.begin();
    l.insert(it, 100);

    it = l.begin();
    while (it != l.end())
    {
        if (*it == 4)
        {
            it = l.erase(it);
            cout << "Value after the removal is : " << *it << endl;
        }
        else
        {
            it++;
        }
    }
    it = l.begin();
    while (it != l.end())
    {
        cout << *it << endl;
        it++;
    }

    return 0;
}