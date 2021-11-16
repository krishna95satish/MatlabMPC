#include <iostream>
#include <stack>

using namespace std;

class stacks
{
private:
    int data_{0};

public:
    stacks(/* args */);
    stacks(int val);
    void print() const;
    stacks &operator=(const stacks &other);
    ~stacks();
};

stacks::stacks(/* args */)
{
}

stacks& stacks::operator=(const stacks &other)
{
    cout << "Equal op running " << endl;
    this->data_ = other.data_;
    return *this;
}

stacks::stacks(int val)
{
    this->data_ = val;
}

void stacks::print() const
{
    cout << this->data_ << endl;
}

stacks::~stacks()
{
}

int main()
{
    stack<stacks> s;
    s.push(stacks(1));
    s.push(stacks(3));
    s.push(stacks(4));

    stacks &temp = s.top();
    
    

    temp.print();

    while ((s.size() != 0))
    {
        s.top().print();
        s.pop();
    }
    return 0;
}