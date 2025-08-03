#include <iostream>
using namespace std;

int main()
{
    long long t, n;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        cin >> n;
        while (!(n % 2))
        {
            n /= 2;
        }
        if (n > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1475/A