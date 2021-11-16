#include <iostream>
using namespace std;

class Parent
{
private:
    int one;

public:
    Parent(/* args */);
    Parent(int val) : one(val){};
    Parent(const Parent &other);
    virtual void print();
    ~Parent();
};

Parent::Parent(/* args */)
{
    cout << "Parent Constructor running " << endl;
}

void Parent::print()
{
    cout << "This is Parent " << endl;
}

Parent::Parent(const Parent &other)
{
    cout << "Copy constructor " << endl;
}

Parent::~Parent()
{
    cout << "Parent destructor running " << endl;
}

class Child : public Parent
{
private:
    int two;

public:
    Child(/* args */);
    Child(int val) : two(val){};
    void print();
    ~Child();
};

Child::Child(/* args */)
{
    cout << "Child Constructor running " << endl;
}

void Child::print()
{
    cout << "This is Child " << endl;
}

Child::~Child()
{
    cout << "Child destructor running " << endl;
}

int main()
{
    Child c;
    cout << "-----------" << endl;
    Parent &p = c;
    
    return 0;
}