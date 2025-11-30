#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long t, ans, count, n, k;
    cin >> t;
    while (t--)
    {
        ans = count = 0;
        cin >> n >> k;
        vector<long long> a(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (size_t i = 0, s = n - 1; i < s; i++)
        {
            if (a[i + 1] - a[i] <= k)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            if (count > ans)
            {
                ans = count;
            }
        }

        cout << (n - (ans + 1)) << endl;
        // cout << "|" << (n - (ans + 1)) << "|" << endl;
    }
}

// https://codeforces.com/problemset/problem/1850/D