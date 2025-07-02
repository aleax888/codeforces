#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, k, ans;
    cin >> n >> k;

    ans = ceil(n / 2.0);
    ans = k > ans ? (k - ans) * 2 : (k * 2) - 1;

    cout << ans;
}

// https://codeforces.com/problemset/problem/318/A