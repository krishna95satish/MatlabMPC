#include <iostream>
#include <exception>

using namespace std;

class CustomExceptions : public exception
{
private:
    /* data */
public:
    CustomExceptions(/* args */);
    virtual const char *what() const throw();
    ~CustomExceptions();
};

CustomExceptions::CustomExceptions(/* args */)
{
}

const char *CustomExceptions::what() const throw()
{

    return "Something is not just right !";
}

CustomExceptions::~CustomExceptions()
{
}

void testMethod()
{

    throw CustomExceptions();
}

int main()
{
    try
    {
        /* code */
        testMethod();
    }
    catch (const CustomExceptions &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
