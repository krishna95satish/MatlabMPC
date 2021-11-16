#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool test(int a, int b)
{
    return (a < b);
}

bool test2(int a)
{
    return (a > 2);
}

struct test3
{

    bool operator()(int a)
    {
        return (a > 2);
    }
};

int main()
{
    vector<int> v;
    v.emplace_back(1);
    v.push_back(4);
    v.emplace(v.end(), 2);
    v.emplace_back(3);

    cout << "Before " << endl;
    for (auto &i : v)
    {
        cout << i << endl;
    }

    //sort(v.begin(), v.end(), test);
    cout << "Check this " << count_if(v.begin(), v.end(), test3()) << endl;
    cout << "After " << endl;
    for (auto &i : v)
    {
        cout << i << endl;
    }

    return 0;
}