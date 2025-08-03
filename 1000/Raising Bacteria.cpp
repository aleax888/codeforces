#include <iostream>
using namespace std;

int main()
{
    long long x, ans = 0;
    cin >> x;

    while (x > 1)
    {
        ans += x % 2;
        x /= 2;
    }

    cout << ans + 1;
}

// https://codeforces.com/problemset/problem/579/A