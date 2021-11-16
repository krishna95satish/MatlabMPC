#include <iostream>

using namespace std;

class Parent
{
private:
    /* data */
public:
    Parent(/* args */) {}
    virtual ~Parent() {}
};

class Child : public Parent
{
private:
    /* data */
public:
    Child(/* args */) {}
    ~Child() {}
};

int main()
{
    Child c1;
    Parent p2;
    Parent *p = &p2;

    Child *c = dynamic_cast<Child *>(p);
    if (c == nullptr)
    {
        std::cout << "Invalid cast" << std::endl;
    }
    else
    {
        std::cout << c << std::endl;
    }

    return 0;
}