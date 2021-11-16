#include <iostream>
#include <initializer_list>

using namespace std;

template <class T>
void test(initializer_list<T> iList)
{
    for (auto i : iList)
    {
        cout << i << endl;
    }
}

template <typename K>
class inisializerList
{
private:
    /* data */
public:
    inisializerList(/* args */){};
    inisializerList(initializer_list<K> lList)
    {
        for (auto i : lList)
        {
            cout << i << " " << flush;
        }
    };
    ~inisializerList(){};
};

int main()
{
    test<int>({1, 2, 3, 4, 5});
    test<string>({"one", "two", "three", "four"});
    // class
    inisializerList<int> classIint({1, 2, 3, 4, 5, 6, 7, 8, 9});
    cout << endl;

    return 0;
}