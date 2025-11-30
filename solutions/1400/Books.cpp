#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    long long n, t, ans = INT_MIN;
    cin >> n >> t;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 0, j = 0; i < n; i++)
    {
        while (a[j] <= t && j < n)
        {
            t -= a[j];
            j++;
        }
        ans = max(ans, j - i);
        t += a[i];
    }

    cout << ans;
}

// https://codeforces.com/problemset/problem/279/B