#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class sortingVec
{
private:
    int val_{0};

public:
    sortingVec(/* args */);
    sortingVec(int val);
    int getVal() const;
    bool operator<(const sortingVec &other) const;
    bool operator()(const sortingVec& other) const;
    friend bool comp(const sortingVec& obj1, const sortingVec& obj2);
    ~sortingVec();
};

sortingVec::sortingVec(/* args */)
{
}

sortingVec::sortingVec(int val)
{
    this->val_ = val;
}

int sortingVec::getVal() const
{
    return this->val_;
}

sortingVec::~sortingVec()
{
}

bool sortingVec::operator<(const sortingVec &other) const
{
    return this->val_ < other.val_;
}

bool sortingVec::operator()(const sortingVec& other) const {
    return this->val_ < other.val_;
}

bool comp(const sortingVec& obj1, const sortingVec& obj2) {
    return obj1.val_ < obj2.val_;
}


int main()
{
    vector<sortingVec> v;

    v.emplace_back(sortingVec(1));
    v.emplace(v.end(), sortingVec(2));
    v.push_back(100);
    v.push_back(sortingVec(0));

    sort(v.begin(), v.end(), comp);

    for (auto &i : v)
    {
        cout << i.getVal() << endl;
    }

    return 0;
}