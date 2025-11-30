#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, ans, n, k;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n >> k;
        vector<int> a(n + k), b(n);

        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (size_t i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        for (size_t i = n, s = a.size(); i < s; i++)
        {
            a[i] = b[i - k];
        }
        sort(a.begin(), a.end(), greater<int>());

        // cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
        // for (auto &&i : a)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        // for (auto &&i : b)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        // cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;

        for (size_t i = 0; i < n; i++)
        {
            ans += a[i];
        }

        cout << ans << endl;
        // cout << "|" << ans << "|" << endl;
    }
}

// https://codeforces.com/problemset/problem/1353/B