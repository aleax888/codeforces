#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, n, l, r;
    string s;

    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        cin >> n >> s;
        l = 0;
        r = n - 1;
        for (; l < r && s[l] != s[r]; l++, r--)
            ;
        cout << n - (2 * l) << endl;
        // cout << "|" << n - (2 * l) << "|" << endl;
    }
}

// https://codeforces.com/problemset/problem/1791/C