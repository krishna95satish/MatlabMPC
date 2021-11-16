#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class uniquePtr
{
private:
    static const int SIZE{100};
    shared_ptr<int[]> ptr;

public:
    uniquePtr(/* args */) : ptr(new int[SIZE]) { cout << "Constructor runnig " << endl; }
    uniquePtr(uniquePtr&& other) {
        cout << "Move constructor" << endl;
        ptr = other.ptr;
    }
    void print()
    {
        cout << "Hello " << endl;
    }
    ~uniquePtr() { cout << "Destructor running" << endl; }
};

int main()
{
    uniquePtr p;
    p.print();
    vector<uniquePtr> v;
    v.emplace_back(uniquePtr());
    return 0;
}