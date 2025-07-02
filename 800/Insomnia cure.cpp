#include <iostream>
using namespace std;

int main()
{
    int k, l, m, n, d, ans = 0;
    cin >> k >> l >> m >> n >> d;

    for (size_t i = 1, s = d + 1; i < s; i++)
    {
        if (!(i % k && i % l && i % m && i % n))
        {
            ans++;
        }
    }

    cout << ans;
}

// https://codeforces.com/problemset/problem/148/A