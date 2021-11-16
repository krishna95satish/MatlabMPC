#include <iostream>
#include <list>
#include <vector>

using namespace std;

class List
{
private:
    list<int> l_;

public:
    List(/* args */);
    void insert(int val);
    void remove(int val);
    void view();
    ~List();
};

List::List(/* args */)
{
}

void List::view()
{
    auto it = l_.begin();
    while(it != l_.end()) {
        cout << "Elemsts are : " << *it << endl;
        it++;
    }
}

void List::remove(int val) {
    l_.remove(val);
}

void List::insert(int val)
{
    l_.push_back(val);
}

List::~List()
{
}

int main()
{
    int userResponse{0}, tempValue{0};
    List l;
    cout << "Welcome to the List DB " << endl;
    while (1)
    {
        cout << "Please select the following options, 1-> insert a list, 2-> erase the list, 3-> View the list " << endl;
        cin >> userResponse;
        while (!(userResponse != 0 && userResponse <= 3))
        {
            cout << "Try again" << endl;
            cin >> userResponse;
        }
        switch (userResponse)
        {
        case 1:
            cout << "Please enter the value to be inserted " << endl;
            cin >> tempValue;
            l.insert(tempValue);
            break;
        case 2:
            cout << "Enter the element to be removed" << endl;
            cin >> tempValue;
            l.remove(tempValue);
            break;

        case 3:
            l.view();
            break;
        default:
            break;
        }
    }
}