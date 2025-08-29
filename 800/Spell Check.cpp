#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t, n;
    string s;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        cin >> n >> s;
        sort(s.begin(), s.end());
        if (s == "Timru")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1722/A