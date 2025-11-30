#include <iostream>
#include <vector>
using namespace std;

vector<long long> a, dp;

long long get_max_points(long long value)
{
    if (value < 1)
    {
        return 0;
    }

    if (dp[value] == -1)
    {
        dp[value] = max(get_max_points(value - 1), get_max_points(value - 2) + a[value] * value);
    }

    return dp[value];
}

int main()
{
    a = vector<long long>(100001, 0);
    dp = vector<long long>(100001, -1);

    long long n, a_i;
    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        cin >> a_i;
        a[a_i]++;
    }

    // for (size_t i = 0; i < n + 1; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    cout << get_max_points(100000);

    // cout << endl;
    // for (size_t i = 0; i < n + 1; i++)
    // {
    //     cout << dp[i] << " ";
    // }
}

// https://codeforces.com/problemset/problem/455/A