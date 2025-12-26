#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, l, r, n;
    string s;
    cin >> s >> m;
    n = s.size();

    vector<int> prefix_sum(n);
    prefix_sum[0] = 0;
    for (size_t i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            prefix_sum[i] = prefix_sum[i - 1] + 1;
        }
        else
        {
            prefix_sum[i] = prefix_sum[i - 1];
        }
    }

    while (m--)
    {
        cin >> l >> r;

        // cout << '|' << prefix_sum[r - 1] - prefix_sum[l - 1] << '|' << endl;
        cout << prefix_sum[r - 1] - prefix_sum[l - 1] << endl;
    }
}

// link: https://codeforces.com/problemset/problem/313/B