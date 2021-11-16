#include <iostream>
#include <memory.h>

using namespace std;

class MemoryCopy
{
private:
    int *pVal{nullptr};
    static const int SIZE{100};

public:
    MemoryCopy();
    MemoryCopy(const MemoryCopy &other);
    MemoryCopy &operator=(const MemoryCopy &other);
    ~MemoryCopy();
};

MemoryCopy::MemoryCopy(/* args */)
{
    pVal = new int[SIZE]{};
    memset(pVal, 0, sizeof(int) * SIZE);
}

MemoryCopy::MemoryCopy(const MemoryCopy &other)
{
    pVal = new int[SIZE]{};
    memcpy(pVal, other.pVal, sizeof(int) * SIZE);
}

MemoryCopy& MemoryCopy::operator=(const MemoryCopy &other)
{
    pVal = new int[SIZE]{};
    memcpy(pVal, other.pVal, sizeof(int) * SIZE);
    return *this;
}

MemoryCopy::~MemoryCopy()
{
    delete [] pVal;
}

int main()
{
    MemoryCopy m;

    return 0;
}