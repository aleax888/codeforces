#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a + b > 9 || b + c > 9 || c + a > 9)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1850/A