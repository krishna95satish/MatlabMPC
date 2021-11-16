#include <iostream>

using namespace std;

class Test
{
private:
    /* data */
    int data{0};

public:
    Test(/* args */);
    Test(int val);
    void print()
    {
        cout << "This is from Test class with data :  " << this->data << endl;
    }
    ~Test();
};

Test::Test(/* args */)
{
}

Test::Test(int val)
{

    if (val > 100)
    {
        throw string("This is not possible, No memory");
    }
    this->data = val;
}

Test::~Test()
{
}

void goesWrong()
{
    cout << "in goesWrong " << endl;
    bool isErr = true;
    if (isErr)
    {
        //throw(10);
        throw Test(120);
        //throw string("Krishna Satish");
    }
}

int main()
{
    try
    {
        goesWrong();
    }
    catch (int &err)
    {
        cout << "Err : " << err << endl;
    }
    catch (Test &err)
    {
        cout << "Err : " << endl;
        err.print();
    }
    catch (string &err)
    {
        cout << "Err : " << err << endl;
    }

    return 0;
}