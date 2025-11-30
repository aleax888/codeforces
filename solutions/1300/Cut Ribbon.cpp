#include <iostream>
#include <string.h>
#include <climits>
using namespace std;

int n, a, b, c, dp[4001];
int pieceCount(int sum)
{
    if (sum < 0)
    {
        return INT_MIN;
    }
    else if (sum == 0)
    {
        return 0;
    }
    if (dp[sum] == -1)
    {
        dp[sum] = max(pieceCount(sum - a), max(pieceCount(sum - b), pieceCount(sum - c))) + 1;
        return dp[sum];
    }
    else
    {
        return dp[sum];
    }
}

int main()
{
    cin >> n >> a >> b >> c;
    memset(dp, -1, sizeof(dp));
    cout << pieceCount(n);
}

// https://codeforces.com/problemset/problem/189/A