#include <iostream>
#include <thread>
#include <chrono>
#include <vector>

using namespace std;

void count()
{
    for (size_t i = 0; i < 10; ++i)
    {
        this_thread::sleep_for(chrono::milliseconds(500));
        cout << "Couting : " << i << endl;
    }
}

int main()
{
    vector<thread> t;
    t.emplace_back([]()
                   { count(); });
    t.emplace_back([]()
                   { count(); });
    t[0].join();
    t[1].join();
    return 0;
}