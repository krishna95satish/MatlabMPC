#include <iostream>

using namespace std;

class staticVariable
{
private:
    /* data */
    static int s_numOfClasses;
    int id_;

public:
    staticVariable(/* args */);
    static int getNumOfClasses();
    ~staticVariable();
};

staticVariable::staticVariable(/* args */)
{
    
    id_ = s_numOfClasses++;
}
int staticVariable::getNumOfClasses() {
    return s_numOfClasses;
} 

staticVariable::~staticVariable()
{
}


int staticVariable::s_numOfClasses{1};


int main()
{
    staticVariable s,s1;
    cout << s.getNumOfClasses() << endl;
    cout << s1.getNumOfClasses() << endl;

    return 0;
}