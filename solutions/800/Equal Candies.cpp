#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    long int t, n, ans, _min;
    cin >> t;
    while (t--)
    {
        ans = 0;
        _min = LONG_MAX;
        cin >> n;
        vector<long int> a(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < _min)
            {
                _min = a[i];
            }
        }

        for (size_t i = 0; i < n; i++)
        {
            ans += a[i] - _min;
        }

        cout << ans << endl;
        // cout << "|" << _min << "|" << ans << "|" << endl;
    }
}

// https://codeforces.com/problemset/problem/1676/B