#include <iostream>

template <class T>
T simpleFun(T val)
{
    std::cout << "Template func" << std::endl;
    return val;
}

int simpleFun(int val)
{
    std::cout << "Simple func" << std::endl;
    return val;
}

template<typename T>
void testFun()
{
    std::cout << "Test Fun running - " << T() << std::endl;

}

int main()
{
    int val = 10;
    std::cout << simpleFun<>(val) << std::endl;
    // code wont work if you dont put stuff inside <>
    testFun<std::string>();

    return 0;
}