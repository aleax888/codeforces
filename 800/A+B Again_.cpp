#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        cin >> n;
        // cout << "|" << ((n % 100 / 10) + (n % 10)) << "|" << endl;
        cout << ((n % 100 / 10) + (n % 10)) << endl;
    }
}

// https://codeforces.com/problemset/problem/1999/A