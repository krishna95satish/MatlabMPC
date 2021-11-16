#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, double> m;
    m.emplace(2, 0.2);
    m.emplace(3, 0.3);
    m.emplace(1, 0.1);
    m.emplace(1, 0.101);

    auto it = m.begin();

    m.emplace_hint(it, 55, 0.55);

    for (auto &i : m)
    {
        cout << " : " << i.first << " : " << i.second << endl;
    }

    return 0;
}