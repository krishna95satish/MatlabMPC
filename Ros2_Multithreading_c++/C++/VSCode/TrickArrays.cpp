#include <iostream>

using namespace std;

int main()
{
    int ptrVal[] = {1,2,3,4,5};
    int *ptr = ptrVal;
    ++ptr;
    cout << ptr[0] << endl;

    return 0;
}