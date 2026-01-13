#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, _max, _min;
        cin >> a >> b >> c >> d;

        cout << ((a == b && c == d && b == c) ? "YES" : "NO") << endl;
    }
}

// link: https://codeforces.com/problemset/problem/2167/A