#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    std::unordered_map<int, string> um;
    um.insert(make_pair(1, "krishna"));
    um.insert(make_pair(2, "satish"));
    um.insert(make_pair(10, "Shagufta"));
    um.insert(make_pair(0, "sharif"));
    for (auto &i : um)
    {
        cout << "Key : " << i.first << " Value : " << i.second << endl;
    }

    if (um.find(10) != um.end()) {
        cout << "found the element " << endl;
    } else {
        cout << "couldnt find the element " << endl;
    }
}