#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_set<int> us;
    us.insert(10);
    us.insert(13);
    us.emplace(12);
    us.emplace(12);

    for (auto &i : us)
    {
        std::cout << i << std::endl;
    }

    std::cout << std::endl;
    // MultiSets
    std::unordered_multiset<int> ums;
    ums.insert(10);
    ums.insert(10);
    ums.insert(10);
    for (auto &i : ums)
    {
        std::cout << i << std::endl;
    }

    if(ums.find(10) != ums.end()) {
        std::cout << "Item found " << std::endl;
    }

    us.reserve(100);

    for (auto &i : us)
    {
        std::cout << i << std::endl;
    }
    return 0;
}