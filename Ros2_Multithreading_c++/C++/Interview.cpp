#include <iostream>

using namespace std;

class Parent
{
public:
    Parent() { cout << "Parent  " << endl; };
    ~Parent() { cout << "Parent destroyed  " << endl; };
};

class Child1 : public Parent
{
public:
    Child1() { cout << "Child1  " << endl; };
    ~Child1() { cout << "Child1  destroyed " << endl; };
};

class Child2 : public Child1
{
public:
    Child2() { cout << "Child2  " << endl; };
    ~Child2() { cout << "Child2  destroyed " << endl; };
};

int main()
{

    Parent &&p = Child2();

    return 0;
}