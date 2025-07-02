#include <iostream>
using namespace std;

int main()
{
    int n, h, a_i, ans = 0;

    cin >> n >> h;

    for (size_t i = 0; i < n; i++)
    {
        cin >> a_i;
        ans += (a_i > h ? 2 : 1);
    }
    cout << ans;
}

// https://codeforces.com/problemset/problem/677/A