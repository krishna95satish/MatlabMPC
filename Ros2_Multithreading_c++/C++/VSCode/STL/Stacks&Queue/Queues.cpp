#include <iostream>
#include <queue>

using namespace std;

class queues
{
private:
    int data_{0};

public:
    queues(/* args */);
    queues(int val);
    void print() const;
    queues &operator=(const queues &other);
    ~queues();
};

queues::queues(/* args */)
{
}

queues& queues::operator=(const queues &other)
{
    cout << "Equal op running " << endl;
    this->data_ = other.data_;
    return *this;
}

queues::queues(int val)
{
    this->data_ = val;
}

void queues::print() const
{
    cout << this->data_ << endl;
}

queues::~queues()
{
}

int main()
{
    queue<queues> s;
    s.push(queues(1));
    s.push(queues(3));
    s.push(queues(4));

    queues &temp = s.front();
    
    

    temp.print();

    while ((s.size() != 0))
    {
        s.front().print();
        s.pop();
    }
    return 0;
}