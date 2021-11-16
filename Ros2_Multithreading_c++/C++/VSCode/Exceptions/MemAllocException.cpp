#include <iostream>

using namespace std;

class MemAlloc
{
private:
    int *pVal_;
    int idx_{0};
    size_t size_{0};

public:
    MemAlloc(){};
    MemAlloc(int val);
    void insert(int val);
    bool isFull();
    size_t getSize();
    int getVal(int idx);
    ~MemAlloc();
};

MemAlloc::MemAlloc(int val)
{
    pVal_ = new int[val];
    size_ = val;
}

size_t MemAlloc::getSize()
{
    return size_;
}

MemAlloc::~MemAlloc()
{
    delete[] pVal_;
}

bool MemAlloc::isFull()
{
    bool isBufferFull{false};
    if (idx_ >= size_)
    {
        isBufferFull = true;
    }
    return isBufferFull;
}

void MemAlloc::insert(int val)
{
    if (!(this->isFull()))
    {
        pVal_[idx_] = val;
        idx_++;
    }
    else
    {
        cout << "stack is full and hence the inserted val : " << val << " is ignored" << endl;
        return;
    }
}

int MemAlloc::getVal(int idx)
{
    if (idx >= size_)
    {
        throw string("Elements out of reach!!");
    }
    return pVal_[idx];
}

int main()
{

    MemAlloc memAlloc(3);
    cout << "Size of the stack is " << memAlloc.getSize() << endl;
    memAlloc.insert(10);
    memAlloc.insert(20);
    memAlloc.insert(30);
    memAlloc.insert(40);
    try
    {
        /* code */
        int loc = 3;
        int val = memAlloc.getVal(loc);
        cout << "The val at location : " << loc << " is : " << val << endl;
    }
    catch (const string &e)
    {
        std::cerr << e << '\n';
    }

    return 0;
}