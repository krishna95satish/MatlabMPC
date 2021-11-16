// constuctor calling another construtor is called delegation constructor, not possible to do in c++98

#include <iostream>

using namespace std;

class Parent
{
private:
    /* data */
public:
    Parent(/* args */);
    Parent(int a);
    ~Parent();
};

Parent::Parent(/* args */):Parent(10)
{
    cout << "Non parameterized constructor " << endl;
}

Parent::Parent(int a)
{
    cout << "parameterized constructor " << endl;
}

Parent::~Parent()
{
}

void lValref(string&& val) {
    cout << val << endl;
}

int main()
{   
    Parent p;
    lValref("Krishna");

    return 0;
}