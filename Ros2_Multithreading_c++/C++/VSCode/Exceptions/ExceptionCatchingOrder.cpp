#include <iostream>
#include <exception>

using namespace std;

void test(bool condition)
{

    if (condition)
    {
        throw exception();
    }
    else
    {
        throw bad_alloc();
    }
}

int main()
{

    try
    {
        /* code */
        test(false);
    }
    catch (const std::bad_alloc &e)
    {
        std::cerr << "Bad_alloc err :  " << e.what() << '\n';
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception err :  " << e.what() << '\n';
    }

    return 0;
}