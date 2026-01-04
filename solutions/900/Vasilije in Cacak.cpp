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
        long long n, k, x, _min = 0, _max = 0;
        cin >> n >> k >> x;

        _min = (k * (k + 1)) / 2;
        _max = ((n * (n + 1)) / 2) - (((n - k) * ((n - k) + 1)) / 2);

        cout << ((x <= _max && x >= _min) ? "YES" : "NO") << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1878/C