#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    long long t, n, a_i, ans;
    cin >> t;
    for (size_t test_case_i = 0; test_case_i < t; test_case_i++)
    {
        ans = 0;
        unordered_map<long long, long long> a;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a_i;
            a_i -= i;
            if (a.find(a_i) == a.end())
            {
                a[a_i] = 1;
            }
            else
            {
                a[a_i]++;
            }
        }

        for (auto &&i : a)
        {
            ans += (i.second * (i.second - 1)) / 2;
        }

        cout << ans << endl;
    }
}

// https://codeforces.com/problemset/problem/1520/D