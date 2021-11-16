#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;
    m.insert(make_pair(2, "Shaggu"));
    m.insert(make_pair(1, "Krishna Satish"));

    auto it = m.begin();
    while ((it != m.end()))
    {
        /* code */
        cout << "The Key is : " << it->first << " The value is " << it->second << endl;
        it++;
    }

    return 0;
}