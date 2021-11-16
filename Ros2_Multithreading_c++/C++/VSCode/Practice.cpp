#include <iostream>
#include <initializer_list>

using namespace std;

template <typename T>
void test(initializer_list<T> l) {
    for (auto i : l) {
        cout << i << flush;
    }
}

int main() {

    test<string>({"Krishna", "Satish", "is", "a", "good", "boy"});

    return 0;
}