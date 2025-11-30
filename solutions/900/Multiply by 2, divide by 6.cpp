#include <iostream>
using namespace std;

int main()
{
    long long t, n, ans;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        ans = 0;
        cin >> n;

        while (!(n % 6))
        {
            n /= 6;
            ans++;
            // cout << "6: " << n << " -> " << ans << endl;
        }
        while (!(n % 3))
        {
            n /= 3;
            ans += 2;
            // cout << "3: " << n << " -> " << ans << endl;
        }
        if (n == 1)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1374/B