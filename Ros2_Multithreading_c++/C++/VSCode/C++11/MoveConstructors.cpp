#include <iostream>
#include <memory.h>
#include <vector>

using namespace std;

class MoveConstructors
{
private:
    const int SIZE{100};
    int *ptr{nullptr};

public:
    MoveConstructors(/* args */);
    MoveConstructors(const MoveConstructors &other);
    MoveConstructors(MoveConstructors &&other);
    MoveConstructors &operator=(const MoveConstructors &other);
    MoveConstructors &operator=(MoveConstructors &&other);
    ~MoveConstructors();
};

MoveConstructors::MoveConstructors(/* args */)
{
    ptr = new int[SIZE];
}

MoveConstructors::MoveConstructors(const MoveConstructors &other)
{
    cout << " Copy constructor with L value " << endl;
    ptr = new int[SIZE];
    memcpy(ptr, other.ptr, sizeof(int) * SIZE);
}

MoveConstructors &MoveConstructors::operator=(const MoveConstructors &other)
{
    cout << " Operator = with L value" << endl;
    ptr = new int[SIZE];
    memcpy(ptr, other.ptr, sizeof(int) * SIZE);
    return *this;
}

MoveConstructors::MoveConstructors(MoveConstructors &&other)
{
    cout << " Copy constructor with R value " << endl;
    this->ptr = other.ptr;
    other.ptr = nullptr;
}

MoveConstructors &MoveConstructors::operator=(MoveConstructors &&other)
{
    cout << " Operator = with R value" << endl;
    this->ptr = other.ptr;
    other.ptr = nullptr;
    return *this;
}

MoveConstructors::~MoveConstructors()
{
    delete[] ptr;
}

int main()
{
    vector<MoveConstructors> v;
    MoveConstructors m1, m2;
   // MoveConstructors m3 = m1;
    MoveConstructors m5 = MoveConstructors();
    //v.emplace_back(MoveConstructors());
    return 0;
}