#include <iostream>
#include <map>

using namespace std;

class customValMap
{
private:
    /* data */
    int data_{0};

public:
    customValMap(/* args */);
    customValMap(const customValMap &other);
    const customValMap &operator=(const customValMap &other);
    void setVal(int);
    int getVal();
    ~customValMap();
};

customValMap::customValMap(/* args */)
{
}

const customValMap& customValMap::operator=(const customValMap &other)
{
    cout << "Equal to operator overloaded " << endl;
    this->data_ = other.data_;
    return *this;
}

customValMap::customValMap(const customValMap &other)
{
    cout << "Copy constructor is running!" << endl;
    this->data_ = other.data_;
}

void customValMap::setVal(int val)
{
    this->data_ = val;
}

int customValMap::getVal()
{
    return data_;
}

customValMap::~customValMap()
{
}

int main()
{
    customValMap c1, c2;
    c1.setVal(10);
    c2.setVal(20);
    customValMap c3 = c2;
    // Maps stuff
    map<int, customValMap> m;
    //m.insert(make_pair(0, c1));
    //m.insert(make_pair(1, c2));
    //m.insert(make_pair(2, c2));

    m.emplace(0, c1);
    m.emplace(1, c2);
    m.emplace(2, c3);

    auto it = m.begin();
    while (it != m.end())
    {
        /* code */
        cout << "Key : " << (*it).first << " Value : " << (it->second).getVal() << endl;
        ++it;
    }

    return 0;
}