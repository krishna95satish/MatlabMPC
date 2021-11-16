#include <iostream>
#include <map>

using namespace std;

class customKeyMap
{
private:
    /* data */
    int data_{0};
public:
    customKeyMap(/* args */);
    void setVal(int);
    int getVal() const;
    bool operator<(const customKeyMap& other) const;
    ~customKeyMap();
};

customKeyMap::customKeyMap(/* args */)
{
}

void customKeyMap::setVal(int val) {
    this->data_ = val;
}

int customKeyMap::getVal() const{
    return data_;
}

customKeyMap::~customKeyMap()
{
}

bool customKeyMap::operator<(const customKeyMap& other) const{
    return (this->data_ < other.data_);
}

int main()
{
    customKeyMap c1,c2;
    c1.setVal(10);
    c2.setVal(20);
    map<customKeyMap, int> m;
    m.insert(make_pair(c1, 0));
    m.insert(make_pair(c2, 1));
    auto it = m.begin();
    
    while (it!= m.end()) 
    {
        cout << "Key : " << (it->first).getVal() << " Value : " << it->second << endl;
        ++it;
    }
    
    
    return 0;
}