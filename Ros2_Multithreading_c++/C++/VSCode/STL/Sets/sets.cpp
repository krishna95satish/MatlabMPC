#include <iostream>
#include <set>

using namespace std;

class sets
{
private:
    int data_{0};

public:
    sets(/* args */);
    sets(int val);
    sets(const sets &other);
    bool operator<(const sets &other) const;
    int getData() const;
    ~sets();
};

sets::sets(const sets &other)
{
    cout << "Copy constructor running " << endl;
    this->data_ = other.data_;
}

sets::sets(/* args */)
{
}

int sets::getData() const
{
    return this->data_;
}

sets::sets(int val)
{
    this->data_ = val;
}

sets::~sets()
{
}

bool sets::operator<(const sets &other) const
{
    return this->data_ < other.data_;
}

int main()
{
    set<sets> s;

    s.insert(sets(2));
    s.insert(sets(2));
    s.insert(sets(0));
    s.insert(sets(1));
    s.emplace(sets(5));
    auto testit = s.begin();
    s.emplace_hint(testit, sets(55));
    if (s.find(sets(26)) != s.end())
    {
        cout << "Found the element " << endl;
    }
    else
    {
        cout << "Cannot find the search element " << endl;
    }
    auto eq_rng_itr = s.equal_range(2);
    auto it1 = eq_rng_itr.first;
    while (it1 != eq_rng_itr.second)
    {
        cout << it1->getData() << endl;
        ++it1;
    }
    for (auto &i : s)
    {
        cout << i.getData() << endl;
    }

    return 0;
}