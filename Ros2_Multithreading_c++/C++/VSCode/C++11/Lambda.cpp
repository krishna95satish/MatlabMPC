#include <iostream>

void lamFun(void (*ptrLam)(int)) {
    ptrLam(55);

}

int main(int agrc, char **argv)
{
    int a{10};
    auto test = [](int var)
    {
        std::cout << "This is a lambda expression :  "  << var << std::endl;
    };
    lamFun(test);
    std::cout << "after the value is : " << a << std::endl;

    return 0;
}