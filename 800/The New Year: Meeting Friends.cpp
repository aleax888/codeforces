#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> xi(3);
    for (size_t i = 0; i < 3; i++)
    {
        cin >> xi[i];
    }

    sort(xi.begin(), xi.end());

    cout << xi[2] - xi[1] + xi[1] - xi[0];
}

// https://codeforces.com/problemset/problem/723/A