#include <iostream>
using namespace std;

bool isAP(long long a, long long b, long long c, long long d)
{
    long long _b = a + d;
    long long _c = a + 2 * d;
    // cout << (b == a + d) << " " << (_b > 0 && _b % b == 0) << " " << (c == a + 2 * d) << " " << (_c > 0 && _c % c == 0) << " a=" << a << " b=" << b << " c=" << c << " d=" << d << " _b=" << _b << " _c=" << _c << endl;
    return ((b == _b || (_b > 0 && _b % b == 0)) && (c == _c)) ||
           ((c == _c || (_c > 0 && _c % c == 0)) && (b == _b));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        if (isAP(a, b, c, b - a) || isAP(a, b, c, (c - a) / 2) || isAP(c, b, a, b - c) || isAP(c, b, a, (a - c) / 2))
        {
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1624/B

// b = a + d
// c = a + 2d
// a + (a + d) + (a + 2d) = 3a + 3d = 3(a + d)

// 1 6 3 YES
// 2 1 1 NO
// 1 2 2 YEs