// C++ program to demonstrate the
// making of structure
#include <bits/stdc++.h>
using namespace std;
 
// Define structure
#pragma pack(push, 1)
typedef struct GeeksForGeeks {
    short G1;
    char G2;
    float G3;
}S;
#pragma pacl(pop)

typedef union test
{
    short G1;
    char G2;
    float G3;
}T;


// Driver Code
int main()
{
    // Declaring a Structure
    S s;
    T t;
    cout << sizeof(t) << endl;
    cout << sizeof(s) << endl;
    return 0;
}