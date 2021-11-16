#include <iostream>
#include <list>

using namespace std;

bool removeG50(int val) {
    return (val>50);
}

struct ListRemoveIf
{
    bool operator()(int val) {
        return (val>50);
    }
};


int main()
{
    list<int> l;
    for (size_t i = 0; i < 100; ++i)
    {
        l.emplace_back(int(i));
    }

    auto it = l.begin();
    // Remove if the val is greater than 50
    //l.remove_if(removeG50);
    l.remove_if(ListRemoveIf());   // fucntor

    while (it!= l.end()) 
    {
        cout << *it << endl;
        it++;
    }
    

    return 0;
}