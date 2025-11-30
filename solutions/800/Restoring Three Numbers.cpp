#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> x(4);
    for (size_t i = 0; i < 4; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());

    for (int i = 2; i > -1; i--)
    {
        cout << x[3] - x[i] << " ";
    }
}

// https://codeforces.com/problemset/problem/1154/A