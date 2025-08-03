#include <iostream>
#include <climits>
#include <string.h>
using namespace std;

int n, m, a, b, dp[1001];
int get_min(int rides)
{
    if (rides < 1)
    {
        return 0;
    }

    if (dp[rides] == -1)
    {
        dp[rides] = min(
            get_min(rides - m) + b,
            get_min(rides - 1) + a);
    }

    return dp[rides];
}

int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> n >> m >> a >> b;
    cout << get_min(n);
}

// https://codeforces.com/problemset/problem/466/A