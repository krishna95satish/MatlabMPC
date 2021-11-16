// vector assign
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> first;
    std::vector<int> second;
    std::vector<int> third;

    first.assign(7, 100); // 7 ints with a value of 100

    std::vector<int>::iterator it;
    it = first.begin() + 1;

    second.assign(it, first.end()); // the 5 central values of first

    int myints[] = {1776, 7, 4};
    third.assign(myints, myints + 3); // assigning from array [first, last).
    auto it1 = third.cbegin();
    while (it1 != third.cend())
    {
        cout << *it1 << endl;
        it1++;
    }

    std::cout << "Size of first: " << int(first.size()) << '\n';
    std::cout << "Size of second: " << int(second.size()) << '\n';
    std::cout << "Size of third: " << int(third.size()) << '\n';


    // data member function in vectors

    std::vector<int> myvector(5, 0);
    int *p = myvector.data();
    *p = 10;
    ++p;
    *p = 20;
    p[0] = 100;

    std::cout << "myvector contains:";
    for (unsigned i = 0; i < myvector.size(); ++i)
        std::cout << ' ' << myvector[i];
    std::cout << '\n';

    // emplace 

    vector<int> emplaceVector(10,0);
    auto it2 = emplaceVector.begin() + 3;
    emplaceVector.emplace(it2, 100);

    for(auto x : emplaceVector) {
        cout << x << endl;
    }

    // empty

    while(!emplaceVector.empty()) {
        cout << "elemensts are : " << emplaceVector.back() << endl;
        emplaceVector.pop_back();
    }

    return 0;
}