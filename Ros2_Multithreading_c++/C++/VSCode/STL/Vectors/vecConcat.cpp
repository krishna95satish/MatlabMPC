#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1, v2;
    v1.push_back(0);
    v1.emplace_back(1);

    v2.emplace_back(10);
    v2.emplace_back(11);

    auto it = v1.begin() + 1;
    auto eit = v1.emplace(it, 55);
    v1.insert(v1.begin(), v2.begin(), v2.end());

    for (auto i : v1)
    {
        cout << "Vals in V1 are : " << i << endl;
    }

    cout << v1.max_size() << endl;
    cout << v2.max_size() << endl;

    cout << "before the resize capacity is : " << v1.capacity() << endl;
    v1.resize(100);
    cout << "after the resize capacity is : " << v1.capacity() << endl;
    v1.shrink_to_fit();
    cout << "after shrinking, capacity is : " << v1.capacity() << endl;

    // Swap

    v1.swap(v2);

    for (auto i : v1)
    {
        cout << "Vals in V1 are : " << i << endl;
    }

    // at
    cout << v1.at(0) << endl;

    // assign

    vector <int> vs1, vs2, vs3;
    int arr[] = {1,2,3,4,5};
    vs1.assign(10, 5);
    vs2.assign(vs1.begin()+5, vs1.end());
    vs3.assign(arr, arr+5);

    for (auto Idx : vs3) {
        cout << "Vs3 : " << Idx << endl;
    }

    return 0;
}