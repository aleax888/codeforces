#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main()
{
    cout.setf(std::ios::fixed);
    cout.precision(10);

    double t, a, b;
    long long ans, multiplier, fix;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        ans = 0;
        cin >> a >> b;
        fix = (a < b ? 1 : -1);
        for (int j = 10; j > 0; j--)
        {
            multiplier = floor(abs(b - a) / j);
            ans += multiplier;
            // cout << multiplier << " * " << j << " = " << a << " -> " << abs(b - a) << " " << abs(b - a) / j << " " << floor(abs(b - a) / j) << endl;
            a += j * multiplier * fix;
        }

        // cout << "|" << ans << "|" << endl;
        cout << ans << endl;
    }
}

// https://codeforces.com/problemset/problem/1409/A