#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, l, r, type;

    cin >> n;
    vector<long long> v(n);
    vector<long long> prefix_v(n + 1);
    vector<long long> prefix_sorted_v(n + 1);

    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    prefix_v[0] = 0;
    for (size_t i = 1, s = n + 1; i < s; i++)
    {
        prefix_v[i] = prefix_v[i - 1] + v[i - 1];
    }

    sort(v.begin(), v.end());
    prefix_sorted_v[0] = 0;
    for (size_t i = 1, s = n + 1; i < s; i++)
    {
        prefix_sorted_v[i] = prefix_sorted_v[i - 1] + v[i - 1];
    }

    cin >> m;
    while (m--)
    {
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << prefix_v[r] - prefix_v[l - 1] << endl;
        }
        else
        {
            cout << prefix_sorted_v[r] - prefix_sorted_v[l - 1] << endl;
        }
    }
}

// link: https://codeforces.com/problemset/problem/433/B
