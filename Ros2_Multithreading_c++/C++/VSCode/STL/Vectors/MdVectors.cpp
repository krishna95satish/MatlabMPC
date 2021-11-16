#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<vector<int>> v(10, vector<int>(2, 0));

    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << " " << v[i][j] << flush;
        }
        cout << endl;
    }

    return 0;
}