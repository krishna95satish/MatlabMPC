#include <iostream>
#include <vector>

using namespace std;

int main()
{
    size_t count{0};
    vector<int> vInt;
    while (count <= 5)
    {
        cout << "Size is : " << vInt.size() << endl;
        cout << "Capacity is : " << vInt.capacity() << endl;
        vInt.push_back(int(count));
        count++;
    }

    auto it = vInt.cbegin(); // const iterator in c++11
    while (it != vInt.end())
    {
        cout << *it << endl;
        it++;
    }

    return 0;
}