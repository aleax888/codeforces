#include <iostream>
using namespace std;

int main()
{
    int t, a, b, ans;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        ans = max(min(a, b) * 2, max(a, b));
        cout << ans * ans << endl;
    }
}

// https://codeforces.com/problemset/problem/1360/A