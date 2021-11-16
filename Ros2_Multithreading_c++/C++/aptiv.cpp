#include <iostream>
#include <list>
#include <vector>

using namespace std;

struct checkForZeroes
{
    bool operator()(int &val)
    {
        return (val == 0);
    }
};

bool check_for_zeros(int &val)
{
    return (val == 0);
}

int main()
{
    vector<list<int>> l;
    int arr[] = {0, 0, 0, 0, 0, 0, 10, 0, 0, 20};
    list<int> temp;
    temp.assign(arr, arr + 10);
    for (size_t i = 0; i <= 10; ++i)
    {
        l.push_back(temp);
    }
    auto itr = l.begin();
    while (itr != l.end())
    {
        (*itr).remove_if(checkForZeroes());
        ++itr;
    }

    itr = l.begin();
    while (itr != l.end())
    {
        auto itr1 = (*itr).begin();
        while (itr1 != (*itr).end())
        {
            cout << " " << *itr1 << " " << flush;
            ++itr1;
        }

        cout << endl;
        ++itr;
    }
    return 0;
}