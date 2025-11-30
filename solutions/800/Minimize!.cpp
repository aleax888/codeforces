#include <iostream>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        cin >> a >> b;
        cout << b - a << endl;
    }
}

// https://codeforces.com/problemset/problem/2009/A