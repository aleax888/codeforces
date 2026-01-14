#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ans = 0;
    cin >> n >> m;

    for (size_t i = 1; i <= n; i++)
    {
        ans++;
        if (!(i % m))
        {
            n++;
        }
    }
    cout << ans << endl;
}

// link: https://codeforces.com/problemset/problem/460/A
