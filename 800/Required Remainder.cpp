#include <iostream>
using namespace std;

int main()
{
    int t, x, y, n, ans;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        cin >> x >> y >> n;
        ans = n % x;
        ans = (ans < y ? n - (x - y + ans) : n - (ans - y));
        // cout << "|" << ans << "|" << endl;
        cout << ans << endl;
    }
}

// https://codeforces.com/problemset/problem/1374/A