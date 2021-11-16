#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, double> m;
    m.emplace(1, 0.1);
    m.emplace(2, 0.2);
    m.emplace(3, 0.3);
    m.emplace(4, 0.4);
    m.emplace(1, 0.4);

    auto it = m.find(1);
    if (it != m.end())
    {
        cout << "Found the values " << endl;
    }
    else
    {
        cout << "Item not found " << endl;
    }
    // at

    //cout << " Elemets val at 1 : " << m.at(1) << endl;

    // count
    if (m.count(1) != 0)
    {
        cout << "Found the element : " << m.count(1) << " Times." << endl;
    }

    // equal_range
    auto rq_rng = m.equal_range(1);
    auto f = rq_rng.first;
    while(f != rq_rng.second)
    {
        cout << f->second << endl;
        f++;
    }


    return 0;
}