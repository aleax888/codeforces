#include <iostream>
#include <climits>
#include <vector>
using namespace std;

vector<int> dp;
int n, m;

int get_min(int x)
{
    if (x >= m)
    {
        return x - m;
    }
    if (!dp[x])
    {
        return INT_MAX - 1;
    }

    if (dp[x] < 1)
    {
        dp[x] = 0;
        dp[x] = min(get_min(x * 2), get_min(x - 1)) + 1;
    }
    return dp[x];
}

int main()
{
    cin >> n >> m;
    dp = vector<int>(n + m + 1, -1);
    dp[0] = 0;
    cout << get_min(n);
}

// https://codeforces.com/problemset/problem/520/B