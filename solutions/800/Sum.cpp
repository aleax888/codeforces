#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (size_t j = 0; j < t; j++)
    {
        vector<int> xi(3);
        cin >> xi[0];
        cin >> xi[1];
        cin >> xi[2];

        sort(xi.begin(), xi.end());
        if (xi[0] + xi[1] == xi[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1742/A