#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, ans;
    cin >> a >> b;
    ans = a;
    while (a >= b)
    {
        int rest = a % b;
        a /= b;
        ans += a;
        a += rest;
    }
    cout << ans << endl;
}

// link: https://codeforces.com/problemset/problem/379/A
