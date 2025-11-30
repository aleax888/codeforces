#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n, m, ans = INT_MIN, posible_max = 0;
    cin >> n >> m;
    vector<int> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for (size_t i = 0; i < m; i++)
    {
        posible_max -= a[i];
        if (posible_max > ans)
        {
            ans = posible_max;
        }
        else
        {
            posible_max = ans;
        }
    }
    cout << (ans < 0 ? 0 : ans);
}

// https://codeforces.com/problemset/problem/34/B