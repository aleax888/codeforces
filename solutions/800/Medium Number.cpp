#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        vector<int> abc(3);
        cin >> abc[0] >> abc[1] >> abc[2];

        sort(abc.begin(), abc.end());

        cout << abc[1] << endl;
    }
}

// https://codeforces.com/problemset/problem/1760/A